// Programming Ass.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void PutIntoArray(ifstream& currentFile, char storageArray[], int& index)
{
	currentFile >> noskipws;
	while (!currentFile.eof())
	{
		char ch;
		currentFile >> ch;
		storageArray[index] = ch;
		index++;
	}
	index = 0;
}

int i = 0;
char input[1000];
char textArray[1000];

int main()
{

	ifstream searchFile("search1.txt");
	if (!searchFile)
	{
		cout << "ERROR: ";
		cout << "Can't open search file\n";
	}

	ifstream textFile("text1.txt");
	if (!textFile)
	{
		cout << "ERROR";
		cout << "Can't open text file\n";
	}

	PutIntoArray(searchFile, input, i);
	PutIntoArray(textFile, textArray, i);

	for (i = 0; i < 50; i++)
	{
		if (input[4] == textArray[i])
		{
			cout << input[4] << endl;
			cout << to_string(i) << endl;
			break;
		}
	}

	system("pause");
}
