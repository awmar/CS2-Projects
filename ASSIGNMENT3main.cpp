#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void jokeFirst(fstream &);
void punchSecond(fstream &);

int main()
{
	string input;
	
	fstream joke, punch;
	joke.open("joke.txt", ios::in);
	punch.open("punchline.txt", ios::in);

	if (joke)
	{
		jokeFirst(joke);
		joke.close();
	}
	else
	{
		cout << "ERROR: cannot find joke.txt" << endl;
		system("pause");
		return 0;
	}

	cout << endl;

	if (punch)
	{
		punchSecond(punch);
		punch.close();
	}
	else
	{
		cout << "ERROR: cannot find punchline.txt" << endl;
		system("pause");
		return 0;
	}

	system("pause");
	return 0;
}

void jokeFirst(fstream &dataFile)
{
	string input;

	while (dataFile)
	{
		getline(dataFile, input);
		cout << input << endl;
	}
}

void punchSecond(fstream &dataFile)
{
	string lastLine;
	char letter;
	int count = -1;
	dataFile.seekg(0, ios::end);
	dataFile.seekg(count, ios::end);
	letter = dataFile.get();
	
	while (letter != '\n')
	{
		dataFile.seekg(count, ios::end);
		letter = dataFile.get();
		count--;
	}
	getline(dataFile, lastLine);
	cout << lastLine << endl;
	cout << endl;
}
