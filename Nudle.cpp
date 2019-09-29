// Nudle.cpp : This file contains the 'main' function. Program execution begins and ends there.
#include <fstream>
#include <iostream> 
#include "Header.h"  /* Header Protocol*/
using namespace std;

int main()
{
	int choice;

	do {
		cout << "NUDLE Menu\n";
		cout << "Please make your selection\n";
		cout << "	1 - Generate password\n";
		cout << "	2 - View Saved Passwords\n";
		cout << "	3 - Quit\n";
		cout << "Selection = ";
		cin >> choice;

		switch (choice) {
		case 1:
			PassGen();
			cout << endl << endl << endl;
			break;
		case 2:
			VimPas();
			break;
		case 3:
			cout << "Goodbye!";
			break;
		default:
			cout << endl << endl << "Main Menu\n";
			cout << "Please make your selection\n";
			cout << "	1 - Start game\n";
			cout << "	2 - Options\n";
			cout << "	3 - Quit\n";
			cout << "Selection = ";
			cin >> choice;
		}
	} while (choice != 3);
	return EXIT_SUCCESS;




}