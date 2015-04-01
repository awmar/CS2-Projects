
#ifndef HEADER_H
#define HEADER_H
#include <string>
using namespace std;


class Employee
{
	private:
		string name;
		int idNumber;
		string department;
		string position;
	public:
		Employee(string n, int empn, string dep, string pos)
		{	name = n;
			idNumber = empn;
			department = dep;
			position = pos;	}

		Employee(string n, int empn)
		{
			name = n;
			idNumber = empn;
			department = "";
			position = "";
		}

		Employee()
		{
			name = "";
			idNumber = 0;
			department = "";
			position = "";
		}

		void setName(string n)
		{	name = n;	}

		void setID(int id)
		{	idNumber = id;	}

		void setDep(string dep)
		{	department = dep;	}

		void setPos(string pos)
		{	position = pos;	}

		string getName() const
		{	return name;	}
		
		int getID() const
		{	return idNumber;	}

		string getDep() const
		{	return department;	}

		string getPos() const
		{	return position;	}
};

#endif