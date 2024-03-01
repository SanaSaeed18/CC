#include <string.h>
#include <ctype.h>
#include <stdio.h>

void keyword(char str[10]) {
    if (strcmp("for", str) == 0 || strcmp("while", str) == 0 || strcmp("do", str) == 0 ||
        strcmp("int", str) == 0 || strcmp("float", str) == 0 || strcmp("char", str) == 0 ||
        strcmp("double", str) == 0 || strcmp("static", str) == 0 || strcmp("switch", str) == 0 ||
        strcmp("case", str) == 0)
        printf("\n%s is a keyword", str);
    else
        printf("\n%s is an identifier", str);
}

void identifyOperator(char c, FILE *arithFile, FILE *logicFile) {
    switch (c) {
        case '+':
        case '-':
        case '*':
        case '/':
            putc(c, arithFile);
            printf("\n%c is an arithmetic operator", c);
            break;
        case '=':
        case '<':
        case '>':
        case '&':
        case '|':
        case '!':
            putc(c, logicFile);
            printf("\n%c is a logical operator", c);
            break;
        default:
            break;
    }
}

void SpecialChar(char c, FILE *specialCharFile) {
    if (!isalnum(c) && c != '_' && c != '$' && c != ' ' && c != '\t' && c != '\n')
        putc(c, specialCharFile);
}

int main() {
    FILE *inputFile, *identifierFile, *specialCharFile, *arithOpFile, *logicOpFile, *numberFile;
    char c, str[10];
    int num[100], lineno = 0, tokenvalue = 0, i = 0, j = 0, k = 0;

    printf("\nEnter the C program");
    inputFile = fopen("input", "w");
    while ((c = getchar()) != EOF)
        putc(c, inputFile);
    fclose(inputFile);

    inputFile = fopen("input", "r");
    identifierFile = fopen("identifier", "w");
    specialCharFile = fopen("specialchar", "w");
    arithOpFile = fopen("arithmetic_operators", "w");
    logicOpFile = fopen("logical_operators", "w");
    numberFile = fopen("numbers", "w");

    while ((c = getc(inputFile)) != EOF) {
        if (isdigit(c)) {
            tokenvalue = c - '0';
            c = getc(inputFile);
            while (isdigit(c)) {
                tokenvalue *= 10 + c - '0';
                c = getc(inputFile);
            }
            num[i++] = tokenvalue;
            ungetc(c, inputFile);
            putc(' ', numberFile);
        } else if (isalpha(c)) {
            putc(c, identifierFile);
            c = getc(inputFile);
            while (isdigit(c) || isalpha(c) || c == '_' || c == '$') {
                putc(c, identifierFile);
                c = getc(inputFile);
            }
            putc(' ', identifierFile);
            ungetc(c, inputFile);
        } else if (c == ' ' || c == '\t') {
            printf(" ");
        } else if (c == '\n') {
            lineno++;
        } else {
            identifyOperator(c, arithOpFile, logicOpFile);
            SpecialChar(c, specialCharFile);
        }
    }

    fclose(identifierFile);
    fclose(specialCharFile);
    fclose(arithOpFile);
    fclose(logicOpFile);
    fclose(numberFile);
    fclose(inputFile);

    printf("\nThe numbers in the program are: ");
    for (j = 0; j < i; j++)
        printf("%d ", num[j]);
    printf("\n");

    identifierFile = fopen("identifier", "r");
    k = 0;
    printf("The keywords and identifiers are: ");
    while ((c = getc(identifierFile)) != EOF) {
        if (c != ' ')
            str[k++] = c;
        else {
            str[k] = '\0';
            keyword(str);
            k = 0;
        }
    }
    fclose(identifierFile);

    specialCharFile = fopen("specialchar", "r");
    printf("\nSpecial characters are: ");
    while ((c = getc(specialCharFile)) != EOF)
        printf("%c", c);
    printf("\n");
    fclose(specialCharFile);

    printf("Total number of lines: %d", lineno);
    return 0;
}

