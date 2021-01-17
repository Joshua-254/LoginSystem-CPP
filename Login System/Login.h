#pragma once
#include <string>
using namespace std;
class Login
{
private:
	string Accs;
	string Pass;

public:
	string GetAccs();
	void SetAccs(string accs);

	string GetPass();
	void SetPass(string pass);

	void LoginInput();

	void ReadFile();
};

