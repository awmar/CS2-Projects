#include <iostream>
#include <iomanip>
#include "ProductionWorker.h"

using namespace std;

int main()
{
	ProductionWorker employee1("John Joes", 123, "1/1/2000",
					2, 10.75);

	cout << fixed << showpoint << setprecision(2);

	cout << "Employee Name: " << employee1.getName() << endl;
	cout << "Employee Number: " << employee1.getNumber() << endl;
	cout << "Hire Date: " << employee1.getDate() << endl;
	cout << "Shift: ";
	if(employee1.getShift() == 1)
		cout << "Day" << endl;
	else if(employee1.getShift() == 2)
		cout << "Night" << endl;
	cout << "Shift Number: " << employee1.getShift() << endl;
	cout << "Pay Rate: $" << employee1.getPayRate() << endl;

	system("pause");
	return 0;
}