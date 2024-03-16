#include <iostream>
#include <cctype>
using namespace std;

int countU = 0;
int count = 0;
string expr;

void G();
void U();
void D();

int main() {
	cout << "Assuming there are 2 floors as   G  1  2  :"<<endl;
    cout << "Enter an expression: ";
    cin >> expr;
    expr += "$";
    G();
    
    if (expr[count] == '$' && countU <= 2 ) {
        cout << "Accepted" << endl;
    } else {
        cout <<" Rejected" << endl;
    }
    return 0;
}

// G -> UG | e
void G() {
    if (countU < 2) {
        if (expr[count] == 'u') {
            cout << "G -> UG" << endl;
            U();
            G(); 
        } else {
            cout << "G -> e" << endl;
        }
    }
    	else {
            cout << "G -> e" << endl;
        
	}
}

// U -> uD | u if count of 'u's < 2
void U() {
    if (countU < 2) {
        if (expr[count] == 'u') {
            countU++;
            count++;
            cout << "U -> u";
            if (expr[count] == 'd') {
                cout << "D" << endl;
                D();
            } else {
                cout << endl;
            }
        }
    }
}

// D -> dD | d
void D() {
    if (countU <= 2) {
        if (expr[count] == 'd') {
            count++;
            cout << "D -> d";
            if (expr[count] == 'd') {
                cout << "D" << endl;
                D();
            } else {
                cout << endl;
            }
        }
    }
}

