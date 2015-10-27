// TouthweeSolutions.cpp : Defines the entry point for the console application.
// 

#include "stdafx.h"
#include <iostream>
#include <ctime>
#include <string>
using namespace std;

int main()
{
p1:
	string response;
	string menuchoice;
	int diamond = 0;
	int ore = 0;
	int iron = 0;
	int gold = 0;
	int redstone = 0;
	int lapis = 0;
	int orethisturn = 0;
	int r = 0; //used in the random number gen
	int replay = 5; //used as a life counter
	int speaksebonics = 0;
	cout << "Copyright (C) 2015 Tyler Humphrey\nTerms of use and more at README.md. By using this program you aknowledge the\n terms and conditions located inside.";
	cout << "\nWelcome to Touthwee's Solutions!\nThis is a text adventure game based on a man who is looking to solve all the PC problems in the world.";
		cout << "What would you like to do?\n1. Learn how to fix computers.\n2. Play minecwaft.\n";
		cin >> menuchoice;
	if (menuchoice == "1") {
		cout << "Congrats! Now you can fix a pc!\n";
		cout << "Would you like to go to play video games(1) or learn ebonics(2)?\n";
		goto choice1_1;
	}
	else if (menuchoice == "2") {
		cout << "Success! You played minecwaft!\n";
		goto minecwaft;
	}
	else {
		cout << "Enter 1 or 2!\n";
		goto p1;
	}
choice1_1:
	cin >> menuchoice;
	if (menuchoice == "1") {
		
		
	}
	else if(menuchoice == "2") {
		cout << "You learned how to speak ebonics!";
		speaksebonics = 1; //used to determine if you live in a later interaction.
		cout << "What would you like to do?\n(1)Go to the store or \n";
		cin >> menuchoice;
		if (menuchoice == "1") {
			cout << "You encounter a ghetto man on your way to the store.\n";
			cout << "You walk past him but he grabs your shoulder and says...\n";
			cout << "EY YO MAN YOU LOOK LIKE YOU KNOW HOW TO FIX COMPUTERS, FIX MY PC OR IMMA BLAST YOU\n";
			cout << "Would you like to fix his PC(1), run(2), pull out your gun(3), or talk your way out of it.(4)\n";
			goto choice3_2;
		}
		else if (menuchoice == "2") {

		}
		else {
			cout << "Enter 1 or 2!\n";
		}
	}
	else {
		cout << "Incorrect choice. Enter 1 or 2.\n";
		goto choice1_1;
	}
choice3_2:
	cin >> menuchoice;
	if (menuchoice == "1") {
		cout << "You give in and fix his PC.\n";
	}
	else if (menuchoice == "2") {
		
	}
	else if (menuchoice == "3") {
		cout << "You pull out your gun, however, the ghetto man already has his pulled.\nYou die.\n";
		death:
		time_t now = time(0);
		char* dt = ctime(&now);
		cout << "You died at: " << dt << endl;
		goto end;
	}
	else if (menuchoice == "4") {
		if (speaksebonics == 1) {
			cout << "What are you going to say?\n";
			cin >> response;
			cout << "You say: " << response << endl;
			cout << "Yeah whatever man if I catch you again you gonna fix my pc or die.";
		}
		else {
			cout << "What are you going to say?\n";
			cin >> response;
			cout << "You say: " << response << endl;
			cout << "You dead honkey.";
			goto death;
		}
	}
	else {
		cout << "Enter 1-4!\n";
		goto choice3_2;
	}
minecwaft: //what happens if you play minecraft
		r = rand() % 100 + 1;
		cout << "Welcome to Minecraft! Mine? (1 for Y 2 for N)\n";
		cin >> menuchoice;
			if (ore >= 1) {
				cout << "Diamond: " << diamond << "\nIron: " << iron << "\nGold: " << gold << "\nRedstone: " << redstone << "\nLapis Lazuli: " << lapis << "\nTotal Ore: " << ore << endl;
			}
			if (menuchoice == "1") {
				if (r == 1) {
					cout << "You got some diamond !\n";
					diamond++;
					ore++;
					goto minecwaft2;
				}
				else if (r <= 11) {
					cout << "You got some Iron\n";
					ore++;
					iron++;
					goto minecwaft2;
				}
				else if (r <= 21) {
					cout << "You got some Redstone\n";
					ore++;
					redstone++;
					goto minecwaft2;
				}
				else if (r <= 31) {
					cout << "You got some gold\n";
					ore++;
					gold++;
					goto minecwaft2;
				}
				else {
					cout << "You got nothing.\n";
				}
				goto minecwaft2;
			}
			else {
				goto minecwaft;
			}
minecwaft2: //what happens if you answer yes you'd like to mine
		r = rand() % 100 + 1;
		cout << "Mine? (1 for Y 2 for N)\n";
		cin >> menuchoice;
			if (ore >= 1) {
				cout << "Diamond: " << diamond << "\nIron: " << iron << "\nGold: " << gold << "\nRedstone: " << redstone << "\nLapis Lazuli: " << lapis << endl;
			}
			if (menuchoice == "1") {
				if (r == 1) {
					cout << "You got some diamond !\n";
					diamond++;
					ore++;
					goto minecwaft2;
				}
				else if (r <= 11) {
					cout << "You got some Iron\n";
					ore++;
					iron++;
					goto minecwaft2;
				}
				else if (r <= 16) {
					cout << "You got some Gold\n";
					ore++;
					gold++;
					goto minecwaft2;
				}
				else if (r <= 26) {
					cout << "You got some Redstone\n";
					ore++;
					redstone++;
					goto minecwaft2;
				}
				else if (r <= 31) {
					cout << "You got some Lapis\n";
					ore++;
					lapis++;
					goto minecwaft2;
				}
				else {
					cout << "You got nothing.\n";
					goto minecwaft2;
				}
				goto minecwaft2;
			}
			else {
				goto minecwaft;
			}
end:
			cout << "Game over. Restart? (y or n)\n";
			cin >> menuchoice;
			if (menuchoice == "y") {
				goto p1;
			}
			else {
				return 0;
			}
  system("pause");
  return 0;
}