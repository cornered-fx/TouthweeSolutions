// TouthweeSolutions.cpp : Defines the entry point for the console application.
// 

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	static int r = 0;
	int menuchoice;
	cout << "Copyright (C) 2015 Tyler Humphrey\nTerms of use and more at README.md. By using this program you aknowledge the terms and conditions located inside.";
	cout << "\nWelcome to Touthwee's Solutions!\nThis is a text adventure game based on a man who is looking to solve all the PC problems in the world.";
p1:
	cout << "What would you like to do?\n1. Learn how to fix computers.\n2. Play minecwaft.\n";
	cin >> menuchoice;
	if (menuchoice == 1) {
	cout << "Congrats! Now you can fix a pc!";
		bool fixpc = true;
		goto choice1_1;
	}
	else if (menuchoice == 2) {
		cout << "Success! You played minecwaft!\n";
		goto minecwaft;
	}
	else {
		goto p1;
	}
choice1_1:
	if (menuchoice == 1) {
		cout << "Dank! You learned how to fix a computer!";
	}
	else if (menuchoice == 2) {
		cout << "You learned how to speak ebonics!";
		cout << "What would you like to do?\n1. Learn how to fix computers or\n2. Play minecraft\n";
	}
minecwaft:
	cout << "Welcome to Minecraft! Mine? (1 for Y 2 for N)\n";
	cin >> menuchoice;
	if (menuchoice == 1) {
		cout << "Congrats you mined!\n";
		if ((r = (r + 1) % 2) == 0) {
			// do something.
			cout << "You got some fuckin' ore nigga!\n";
			goto minecwaft2;
		}
		goto minecwaft2;
	}
	else {
		goto minecwaft;
	}
minecwaft2:
	cout << "Mine? (1 for Y 2 for N)\n";
	cin >> menuchoice;
	if (menuchoice == 1) {
		cout << "Congrats you mined!\n";
		if ((r = (r + 1) % 2) == 0) {
			// do something.
			cout << "You got some fuckin' ore nigga!\n";
			goto minecwaft2;
		}
		goto minecwaft2;
	}
	else {
		goto minecwaft;
	}
system("pause");
  return 0;
}

