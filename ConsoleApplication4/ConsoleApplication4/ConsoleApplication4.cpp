// ConsoleApplication4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <stdio.h>

using namespace std;


int main()
{
//Program 1
	cout << "1 Program" << "\n\n";
	int sum, op,av, a1, b1, c1;
	cin >> a1 >> b1 >> c1;
	sum = a1 + b1 + c1;
	op = a1 * b1 *c1;
	av = (a1 + b1 + c1) / 3;
	cout << "Suma" << sum << "\n\n";
	cout << "Dobutok" << op << "\n\n";
	cout << "Arifmetic mean" << av << "\n\n";

	system("pause");
	system("cls");


	//Program 2
	cout << "2 Program" << "\n\n";
	int a2, c2, b2, val;
	cin >> a2 >> c2 >> b2;
	val = a2*c2 - a2*c2*b2 / 100;
	cout << "Cost: \t\t" << a2 << "grn" << endl << endl;
	cout << "Number: \t\t" << c2 << "pieces" << endl << endl;
	cout << "Persentage discount: \t\t" << b2 <<"%" << endl << endl;
	//val = a2*c2 - a2*c2*b2 / 100;
	cout << "Total cost: \t\t" << val << "grn" << endl << endl;

	system("pause");
	system("cls");


	// Program 3
	cout << "3 Program" << "\n\n";

	int a3, b3, c3, salary;
	//const c3;
	cin >> a3 >> b3 >> c3;
	cout << "Salary: \t\t" << a3 << endl;
	cout << "Interest: \t\t" << b3 << endl;
	cout << "Agriments: \t\t" << c3 << endl;
	salary = c3*b3 / 100 + a3;
	cout << "Total: \t\t" << salary << endl;

	system("pause");
	system("cls");


	//Program 4
	//cout << "4 Program" << endl;
	//int a4, b4, h, m, s;


    return 0;
}

