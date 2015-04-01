#ifndef PRODUCTIONWORKER_H
#define PRODUCTIONWORKER_H
#include <string>
#include "Employee.h"

class ProductionWorker : public Employee
{
private:
	int shift;
	double payRate;
public:
	ProductionWorker() : Employee()
	{	shift = 1;
		payRate = 0.0;	}

	ProductionWorker(string name, int eNum, string hDate,
		int sh, double pr): Employee(name, eNum, hDate)
	{	shift = sh;
		payRate = pr;	}

	void setShift(int sh)
	{	shift = sh;	}
	void setPayRate(double pr)
	{	payRate = pr;	}

	int getShift()
	{	return shift;	}

	double getPayRate()
	{	return payRate;	}
};
#endif
