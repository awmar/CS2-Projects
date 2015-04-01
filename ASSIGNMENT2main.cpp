#include <iostream>

using namespace std;

struct Weather
{
	int rain;
	int highT;
	int lowT;
	double averageT;
};

void TempCheck(int);
void ComputeData(Weather [], int);

int main()
{
	const int SIZE = 12;
	Weather months[SIZE];
	int index;
	int totalRain = 0;

	cout << "Enter the following information:\n";
	for(index=0; index<SIZE; index++)
	{
		cout << "Month #" << (index+1) << endl;
		cout << "\tTotal Rainfall: ";
		cin >> months[index].rain;
		totalRain += months[index].rain; //Add rain to total
		//Check highest and lowest temperatures for range (-100 - 140)
		do
		{
			cout << "\tHighest Temperature: ";
			cin >> months[index].highT;
			TempCheck(months[index].highT);
		}while(!(months[index].highT>=(-100) && months[index].highT<=(140)));
		do
		{
			cout << "\tLowest Temperature: ";
			cin >> months[index].lowT;
			TempCheck(months[index].lowT);
		}while(!(months[index].lowT>=(-100) && months[index].lowT<=(140)));
		//Find the average temp for each month
		months[index].averageT = ((months[index].lowT) + (months[index].highT))/2.0;

	}
	
	cout << "\nTotal Rainfall: " << totalRain << endl;
	cout << "Average Monthly Rain: " << (1.0*totalRain)/SIZE << endl;
	ComputeData(months, SIZE);

	system("pause");
	return 0;
}

/*
TempCheck Displays error message if temperature does not fall in
the allowed range (-100 - 140)
*/
void TempCheck(int tempTemp)
{
	if(!(tempTemp>=(-100) && tempTemp<=(140)))
	{
		cout << "Error: Temperatures must be between -100 & 140 degrees.\n";
	}
}

/*
ComputerData function computes Average Monthly Average Temp, finds highest
and lowest temps... This is a mess. I apologize.
*/
void ComputeData(Weather check[], int size)
{
	int avMonthTemp = 0;
	int tempHighest = check[0].highT, indexHigh=0;
	int tempLowest = check[0].lowT, indexLow=0;

	for (int index=0; index < (size-1); index++)
	{
		avMonthTemp += check[index].averageT;
		if (tempHighest < (check[index+1].highT))
		{
			tempHighest = check[index+1].highT;
			indexHigh = (index+1);
		}
		if (tempLowest > (check[index+1].lowT))
		{
			tempLowest = check[index+1].lowT;
			indexLow = (index+1);
		}
		//This last if statement will add the last average monthly temp (month 12)
		if (index == (size-2))
			avMonthTemp += check[index+1].averageT;
	}

	cout << "Average Monthly Average Temperature: " << (1.0*avMonthTemp)/size << endl;
	cout << "Highest Temperature: " << tempHighest
		 << "(month " << indexHigh+1 << ")" << endl;
	cout << "Lowest Temperature: " << tempLowest
		 << "(month " << indexLow+1 << ")" << endl;
}