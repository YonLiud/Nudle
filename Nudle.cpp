// Nudle.cpp : This file contains the 'main' function. Program execution begins and ends there.
#include <fstream>
#include <iostream>
#include <stdlib.h>
#include "Header.h"  /* Header Protocol*/
using namespace std;

int main(int argc, char *argv[])
{
    long length = strtol(argv[1], NULL, 10);
	cout << "NUDLE\n";
	cout << PassGen(length) << endl;
}
