// Labwork3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <stdio.h>

using namespace std;

int main()
	{
		// 1 PROGRAM
		int a, b, sec, min, hour, day;
		cin >> a;
		day = a / 86400;
		hour = a % 86400 / 3600;
		min = a % 86400 % 3600 / 60;
		sec = a % 60;

		cout << day << ":" << hour << ":" << min << ":" << sec << endl << endl;
		b = 86400 - a;
		day = 86400 / b;
		hour = b % 86400 / 3600;
		min = b % 86400 % 3600 / 60;
		sec = b % 60;


		cout << " Elapse time" << "\n\n" << hour << ":" << min << ":" << sec << "\n\n";
		system("pause");
		system("cls");



		// 2 PROGRAM
		int c, s, diam;
		float r;
		const float pi = 3.141592;
		cin >> diam;
		// circle lenght
		c = pi*diam;
		// circle sqare
		r = diam / 2.;

		s = pi*pow(r, 2);
		cout << "circle lenght  " << c << "\n\n" << "circle sqear  " << s << "\n\n";

		system("pause");
		system("cls");



		// 3 PROGRAM




		// 4 PROGRAM


		// 5 PROGRAM



	return 0;
}

