// ConsoleApplication14.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <time.h>
#include <string>

using namespace std;

void main()
{
	//написать самое длинное и самое короткое слово в строке
	/*char str[100];
	char min[30];
	char max[30];

	cin.getline(str, 100);

	char*p, *context;

	p = strtok_s(str, " ", &context);

	strcpy_s(min, p);
	strcpy_s(max, p);

	while (p != NULL)
	{

		if ((strlen(p)) > strlen(max)) {
			strcpy_s(max, p);
		}

		if ((strlen(p)) < strlen(max)) {
			strcpy_s(min, p);
		}
		
		p = strtok_s(NULL, " ", &context);
	}
	cout << "max = " << max << endl;
	cout << "min = " << min << endl;*/

	char str1[100];
	

	cin.getline(str1, 100);

	char*p1, *context1;

	p1 = strtok_s(str1, " ", &context1);
		int z = 0;

		for (int i = 0; i < strlen(p1); i++)
		{
			if (p1[i] == 'a' || p1[i] == 'e' || p1[i] == 'i' || p1[i] == 'o' || p1[i] == 'u') {
				z = 1;
				break;
			}
		}

		if (z == 0) cout << p1 << endl;



	while (p1 != NULL)
	{
		z = 0;
		p1 = strtok_s(NULL, " ", &context1);
		for (int i = 0; i < strlen(p1); i++)
		{
			
			if (p1[i] == 'a' || p1[i] == 'e' || p1[i] == 'i' || p1[i] == 'o' || p1[i] == 'u') {
				z = 1;
				break;
			}
		}
		

		if (z == 0) cout << p1 << endl;
	}




}



