#include <iostream>
#include <string>

using namespace std;

void error();
void passCheck(char *);

//Global variables for validating password requirements
bool length = false;
bool oneLow = false;
bool oneUp = false;
bool oneDig = false;

int main()
{
	bool valid = false;
	const int SIZE = 30;
	char password[SIZE];
	cout << "Password requirements: " << endl;
	error();
	
	//Enter password
	cout << "Enter password: ";
	cin.getline(password, SIZE);

	passCheck(password);

	//Check everything is true.
	if(length==true)
	{
		if(oneLow==true)
		{
			if(oneUp==true)
			{
				if(oneDig==true)
				{
					cout << "The password is valid.\n";
					valid = true;
				}
			}
		}
	}

	//If a requirement is not met display error
	if(valid!=true)
	{
		cout << "The password is invalid for the following reason: \n";
		error();
	}

	system("pause");
	return 0;
}

/*
the error function displays errors in the password.
*/
void error()
{
	if(length==false)
		cout << "\tmust contain at least 6 characters\n";
	if(oneLow==false)
		cout << "\tmust contain 1 lowercase letter\n";
	if(oneUp==false)
		cout << "\tmust contain 1 uppercase letter\n";
	if(oneDig==false)
		cout << "\tmust have at least one digit\n";
}

/*
passCheck will verify all requirements are met
*/
void passCheck(char *pass)
{
	int count;
	int passLen = strlen(pass);
	if(passLen >= 6)
		length = true;
	for(count = 0; count < passLen; count++)
	{
		if (pass[count] >= 'A' && pass[count] <= 'Z')
			oneUp = true;
	}
	for(count = 0; count < passLen; count++)
	{
		if (pass[count] >= 'a' && pass[count] <= 'z')
			oneLow = true;
	}
	for(count = 0; count < passLen; count++)
	{
		if (pass[count] >= '0' && pass[count] <= '9')
			oneDig = true;
	}
}
