#include "Login.h"
#include <fstream>
#include <string>
#include <iostream>
using namespace std;

string Login::GetAccs() {
	return Accs;
}

string Login::GetPass() {
	return Pass;
}

void Login::SetAccs(string accs) {
	Accs = accs;
}

void Login::SetPass(string pass) {
	Pass = pass;
}

void Login::LoginInput() {
    std::cout << "Account = ";
    std::cin >> Accs;
    SetAccs(Accs);

    std::cout << "Password = ";
    std::cin >> Pass;
    SetPass(Pass);
}

void Login::ReadFile() {
    string name;
    string password;

    ifstream AccountFile;
    AccountFile.open("E:\\My_c++_Projects\\Login System\\acc.txt", ios::out);

    if (AccountFile.is_open()) {
        while (!AccountFile.eof()) {
            std::getline(AccountFile, name, ':');
            std::getline(AccountFile, password);
            if (name == GetAccs() && password == GetPass()) {
                cout << "get in" << endl;
                break;
            }
            else if (name != GetAccs() && password == GetPass()) {
                cout << "account incorrect" << endl;
                break;
            }
            else if (password != GetPass() && name == GetAccs()) {
                cout << "pasword incorrect" << endl;
                break;
            }
        }
        if (name != GetAccs() && password != GetPass()) {
            cout << "account and password incorrect" << endl;
        }

        AccountFile.close();
    }
    else {
        cout << "error" << endl;
    }
}