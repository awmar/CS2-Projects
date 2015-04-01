#include <iostream>
#include "header.h"
using namespace std;

int main()
{
	const int numEmploy = 3;
	Employee employs[numEmploy] = {
		//For employee 1 I used the first constructor
		Employee("Susan Meyers", 47899, "Accounting", "Vice President"),
		Employee("Mark Jones", 39119) };
	
	//For employee 2 I used the second constructor
	employs[1].setDep("IT");
	employs[1].setPos("Programmer");

	//For employee 3 I used the default constructor
	employs[2].setName("Joy Rogers");
	employs[2].setID(81774);
	employs[2].setDep("Manufacturing");
	employs[2].setPos("Engineer");
	
	for(int count = 0; count < numEmploy; count++)
	{
		cout << "Name: " << employs[count].getName() << endl;
		cout << "ID Number: " << employs[count].getID() << endl;
		cout << "Department: " << employs[count].getDep() << endl;
		cout << "Position: " << employs[count].getPos() << endl;
		cout << endl;
	}


	system("pause");
	return 0;
}
