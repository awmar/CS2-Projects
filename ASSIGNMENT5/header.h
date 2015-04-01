
#ifndef HEADER_H
#define HEADER_H
#include <iostream>
#include <cstring>

#include <string>
#include <cstdlib>

using namespace std;


class Numbers
{
	private:
		int number;
		static string lessThan20[20];
		
	public:
		Numbers()
		{
			cin >> number;
			if (number >= 0 && number <= 9999)
				numRead();
			else
				printError();
		}

		void numRead()
		{
			static char numArray[5];
			
			itoa(number, numArray, 10);
			cout << numArray << endl; 
			
			int highest = 0;
			for (int count = 0; count < strlen(numArray); count++)
			{
				if (isdigit(numArray[count]))
					highest = count;
			}

			print(numArray, highest);

		}

		int printError()
		{
			cout << "ERROR: Number entered does not meet requirements." << endl;
			return 0;

		}


		//I had no idea how to do this. This looks terrible and I apologize. It works but it isn't pretty.
		void print(char numArray[], int size)
		{
			static string lessThan20[20] = { "zero ", "one ", "two ", "three ", "four ", "five ", "six ",
			"seven ", "eight ", "nine ", "ten ", "eleven ", "twelve ", "thirteen ",
			"fourteen ", "fifteen ", "sixteen ", "seventeen ", "eighteen ", "nineteen " };
			static string tens[10] = { "", "ten", "twenty ", "thirty ", "forty ", "fifty ", "sixty ", "seventy ", "eighty ", "ninety " };
			static string hundreds = "hundred ";
			static string thousands = "thousand ";
			
			
			if (number < 20)
			{
				cout << lessThan20[number] << endl;
			}
			else if (size == 1)
			{
				char numUno[1];
				numUno[0] = numArray[0];
				char numDos[1];
				numDos[0] = numArray[1];
				int num1 = atoi(numUno);
				int num2 = atoi(numDos);
				if (num1 > 1)
					cout << tens[num1];
				else if (num1 == 1 && num2 != 0)
					cout << lessThan20[10 + num2];
				if (num2 != 0 && num1 != 1)
					cout << lessThan20[num2];
				cout << endl;
			}
			else if (size == 2)
			{
				char numUno[1];
				numUno[0] = numArray[0];
				char numDos[1];
				numDos[0] = numArray[1];
				char numTres[1];
				numTres[0] = numArray[2];
				int num1 = atoi(numUno);
				int num2 = atoi(numDos);
				int num3 = atoi(numTres);
				if(num1 != 0)
					cout << lessThan20[num1] << hundreds;
				if(num2 == 1 && num3 == 0)
					cout << tens[num2];
				else if (num2 == 1 && num3 > 0)
					cout << lessThan20[10+num3];
				else
					cout << tens[num2];
				if (num3 != 0 && num2 != 1)
					cout << lessThan20[num3] << endl;
				else
					cout << endl;
			}
			else
			{
				char numUno[1];
				numUno[0] = numArray[0];
				char numDos[1];
				numDos[0] = numArray[1];
				char numTres[1];
				numTres[0] = numArray[2];
				char numCuatro[1];
				numCuatro[0] = numArray[3];
				int num1 = atoi(numUno);
				int num2 = atoi(numDos);
				int num3 = atoi(numTres);
				int num4 = atoi(numCuatro);
				if(num1 != 0)
					cout << lessThan20[num1] << thousands;
				if(num2 != 0)
					cout << lessThan20[num2] << hundreds;
				if(num3 == 1 && num4 == 0)
					cout << tens[num3];
				else if (num3 == 1 && num4 > 0)
					cout << lessThan20[10+num4];
				else
					cout << tens[num3];
				if (num4 != 0 && num3 != 1)
					cout << lessThan20[num4] << endl;
				else
					cout << endl;
			}
		}
};

#endif