#include <iostream>
#include <string>

using namespace std;

char la;
string input;
int matchedChars = 0;
bool status = true;

int match(char t) {
    if (la == t) {
        matchedChars++;
        if (matchedChars < input.length())
            la = input[matchedChars];
        else
            la = '\0'; // Set lookahead character to newline when end of input is reached
        return 1; // Successful match
    } else {
        return 0; // Match failed
    }
}

void Y_();
void X_();
void X();
void Z() {
    if (la == 'k') {
        match('k');
        X();
        if (match('k') == 0) {
            status = false;
        }
    } else if (la == 'g') {
        match('g');
    } else {
        status = false;
        return;
    }
}

void Y() {
    Z();
    Y_();
}

void Y_() {
    if (la == '&') {
        match('&');
        Z();
        Y_();
    }
}

void X() {
    Y();
    X_();
}

void X_() {
    if (la == '%') {
        match('%');
        Y();
        X_();
    }
}

int main() {
    char choice;
    do {
        cout << "Enter a string: ";
        input.clear(); // Clear the input string for each iteration
        matchedChars = 0;
        status= true;
        
		la = cin.get(); // Initialize lookahead character with input
        while (la != '\n') { // Read until newline character
            input.push_back(la); // Append character to input string
            la = cin.get();
        }
        la = input[0]; // Reset lookahead character to the first character of input string
        X();

        if (la == '$' && matchedChars == (input.length() - 1) && status == true) {
            cout << "Parsing successful and " << input << " is accepted..." << endl;
        } else {
            cout << "Parsing failed and " << input << " is rejected..." <<endl;
        }
           cout << endl;
        cout << "Do you want to enter another string? (y/n): ";
        cin >> choice;
        cin.ignore(); 
    } while (choice == 'y' || choice == 'Y');

    return 0;
}

