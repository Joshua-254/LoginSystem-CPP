#pragma once
#include <string>
using namespace std;
class CreateAccount
{
private:
	string Accs;
	string Pass;

public:
	string GetAccs();
	void SetAccs(string accs);

	string GetPass();
	void SetPass(string pass);

	void createAccount();

	void WriteFile();
};

