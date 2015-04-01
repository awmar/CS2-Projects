#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <string>
using namespace std;

class Employee
{
private:
	string empName;
	int empNum;
	string hireDate;
public:
	Employee()
	{	empName = "", empNum = 0,
		hireDate = "1/1/2000";	}

	Employee(string eName, int eNum, string hDate)
	{	empName = eName;
		empNum = eNum;
		hireDate = hDate;	}

	void setName(string eName)
	{	empName = eName;	}

	void setNumber(int eNum)
	{	empNum = eNum;	}

	void setHire(string eHire)
	{	hireDate = eHire;	}

	string getName()
	{	return empName;	}

	int getNumber()
	{	return empNum;	}

	string getDate()
	{	return hireDate;	}
};
#endif 