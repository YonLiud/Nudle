
// reading a text file
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int VimPas() {
	{
		int result;
		char oldname[] = "pass.ndl";
		char newname[] = "pass.txt";
		result = rename(oldname, newname);
		if (result == 0)
			puts("File has been Decrypted");
		else
			perror("Error File Decrypteing");
	}
	string line;
	ifstream myfile("pass.txt");
	if (myfile.is_open())
	{
		while (myfile.good())
		{
			getline(myfile, line);
			cout << line << endl;
		}
		myfile.close();

		{
			int result;
			char oldname[] = "pass.txt";
			char newname[] = "pass.ndl";
			result = rename(oldname, newname);
			if (result == 0)
				puts("File successfully Encrypted");
			else
				perror("Error File Encrypting");
		}
	}

	else cout << "Unable to open Passwords File, please consider Re-Installing NUDLE";
	cout << endl << endl;
	return 0;
}