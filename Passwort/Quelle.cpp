#include <iostream>
#include <string>
#include <random>
#include <ctime>
#include "md5.h"
#include "md5.cpp"

using namespace std;


int main(int argc, char* argv[])
{
	char Password_my[20];
	int Word[5];
	int i,x,count;
	char Password_random[5];

	cout << "Bitte ein Password mit maximal 5 Zeichen eingeben:"<< endl;
	do 
	{
		memset(Password_my, 0, sizeof(Password_my));
		count = 0;
		cout << "Bitte erneut versuchen :"<< endl;
		cin >> Password_my;
	
		for (i = 0; i < 20; i++)
		{
			if (Password_my[i] != '\0')
			{
				count++;
			}
		}
		cout << count << endl;
	} 
	while (count > 5);
	cout << Password_my<< endl;

	cout<<md5(Password_my);

	//random
	/*srand(time(nullptr));
	for (i = 0; i < 5; i++)
	{
		Word[i] = rand() % 62;
	}

	for (i = 0; i < 5; i++)
	{
		cout << Word[i]<< ", ";
	}
	
	for (i = 0; i < 5; i++)
	{
		if (Word[i] < 10)
		{
			for (int y = 0; y < 10; y++) //erzeugt eine Zahle zwischen 0 und 9
			{
				if (Word[i] == y)
				{
					Password_random[i] = 48 + y;
				}
			}
		}
		else
		{
			if (Word[i] < 37)
			{
				for (int y = 0; y < 26; y++) //erzeugt einen Buchstaben zwischen A bis Z
				{
					if (Word[i] == y + 10)
					{
						Password_random[i] = y + 65;
					}
				}
			}
			else
			{
				if (Word[i] < 63)
				{
					for (int y = 0; y < 26; y++)  //erzeugt einen Buchstaben zwichen a bis z
					{
						if (Word[i] == y + 36)
						{
							Password_random[i] = y + 97;
						}
					}
				}
			}
		}
	}
	cout << endl;
	for (i = 0; i < 5; i++)
	{
		cout << Password_random[i];
	}*/

	return 0;
}