/*
 * Calculator.cpp
 *
 *  Date: 05/17/2020
 *  Author: Nicole Riles
 *
 *  */

#include <iostream>
#include <iomanip>
//added in order to use the standard namespace.
using namespace std;

//Changed "void" to "int"
int main()
{
	char statement[100];
	//Changed variables to support double data types.
	double op1, op2;
	char operation;
	//Corrected double quotes to single.
	char answer = 'Y';

	//Changed loop so that it will run if upper or lower case.
	while ((answer=='Y') || (answer=='y'))
	{
		cout << "Enter expression" << endl;
		cin >> op2 >> operation >> op1;

		/* All loops were missing their curly braces.
		 * First loop: compared char to a string and the "<" character was pointing in the wrong direction. */
		if (operation == '+') {
            cout << op1 << " + " << op2 << " = " << op1 + op2 << endl;
        }
		//This also had a "<" character pointing in the wrong direction.
		if (operation == '-') {
            cout << op1 << " - " << op2 << " = " << op1 - op2 << endl;
        }
		//This was missing a semi colon.
		if (operation == '*') {
            cout << op1 << " * " << op2 << " = " << op1 * op2 << endl;
        }
		if (operation == '/') {
            cout << op1 << " / " << op2 << " = " << op1 / op2 << endl;
        }

		cout << "Do you wish to evaluate another expression? " << endl;
		cin >> answer;

		//Added while loop to handle instances of entries other than y/n
		while ((answer != 'Y') && (answer != 'y') && (answer != 'n') && (answer != 'N')){
		    cout << "Invalid input." << endl;
            cout << "Do you wish to evaluate another expression? " << endl;
            cin >> answer;
		}

    }
        // added output for when the program has successfully closed.
        cout << "Program Finished." << endl;
}







