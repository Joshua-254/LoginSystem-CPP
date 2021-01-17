#include "CreateAccount.h"
#include <iostream>
#include <fstream>

string CreateAccount::GetAccs() {
	return Accs;
}

string CreateAccount::GetPass() {
	return Pass;
}

void CreateAccount::SetAccs(string accs) {
	Accs = accs;
}

void CreateAccount::SetPass(string pass) {
	Pass = pass;
}

void CreateAccount::createAccount() {
	std::cout << "Account = ";
	std::cin >> Accs;
	SetAccs(Accs);

	std::cout << "Password = ";
	std::cin >> Pass;
	SetPass(Pass);
}

void CreateAccount::WriteFile() {
	string name;
	string password;

    ofstream AccountFile;
    AccountFile.open("E:\\My_c++_Projects\\Login System\\acc.txt", ios::in);

    if (AccountFile.is_open()) {
		name = GetAccs();
		password = GetPass();

		AccountFile << name << ":" << password << endl;
    }
    else {
        cout << "error" << endl;
    }
}