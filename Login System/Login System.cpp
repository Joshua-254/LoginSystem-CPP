// Login System.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <string>
#include "Login.h"
#include "CreateAccount.h"
using namespace std;

Login L;
CreateAccount CA;

int UserInput;

void Submit();

int main()
{
    while (true) {
        cout << endl;
        cout << "1) login" << endl;
        cout << "2) Create Account" << endl;
        cout << "0) Exit" << endl << endl;

        cout << "Choise = ";
        cin >> UserInput;

        if (UserInput == 1) {
            L.LoginInput();
            Submit();
        }
        else if (UserInput == 2) {
            CA.createAccount();
            Submit();
        }
        else if (UserInput == 0) {
            break;
        }
    }
}

void CheckUserInput(int userinput) {
    if (userinput == 1) {
        L.ReadFile();
    }
    else if (userinput == 2) {
        CA.WriteFile();
    }
}

void InputNUmberCheck(int input) {
    
    while (true) {
        if (input == 3) {
            CheckUserInput(UserInput);
            break;
        }
        else if (input == 0) {
            break;
        }
    }
}

int InputValidation() {
    int input;
    while (!(cin >> input) || input != 3 && input != 0) {
        cout << "error" << endl;
        cin.clear();
        cin.ignore(123, '\n');
    }
    return input;
}

void Submit() {
    cout << "\n\n";
    cout << "3. Submit" << "\t" << "0. Exit" << endl;

    int input = InputValidation();
    InputNUmberCheck(input);
}


