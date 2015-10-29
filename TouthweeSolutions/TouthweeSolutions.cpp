// TouthweeSolutions.cpp : Defines the entry point for the console application.
// Copyright (C) 2015 Tyler Humphrey https://github.com/Minedmaster/TouthweeSolutions/
// Terms of use and more at README.md. You may not use this program without accepting these terms.
// By using this program you aknowledge the terms and conditions located inside.
// If the copy of the license is not included, you may not use this program. Offical copy located at https://github.com/Minedmaster/TouthweeSolutions/blob/master/README.md
#include "stdafx.h"
#include <iostream>
#include <ctime> 
#include <string>
#include <stdlib.h>
using namespace std;

void death() {
	string menuchoice;
	time_t now = time(0);
	char* dt = ctime(&now);
	cout << "You died at: " << dt << endl;
	cout << "Game over. Restart? (y or n)\n";
	cin >> menuchoice;
	if (menuchoice == "y") {
		return;
	}
	else {
		exit(0);
		system("pause");
	}
}
int main()
{
p1:
	string response;
	string menuchoice;
	int diamond = 0, ore = 0, iron = 0, gold = 0, redstone = 0, lapis = 0, orethisturn = 0;
	int r = 0; //used in the random number gen
	int replay = 5; //used as a life counter
	int speaksclearly = 0; // used in option 4 in an encounter with a  man on your way to the store and in other situations.
	int downloadedpictures = 0; //used for an encounter when you bring someone home and attempt to watch a movie with them.
	cout << "Copyright (C) 2015 Tyler HumphreynT\nTerms of use and more at README.md.\nYou may not use this program without accepting these terms.\nBy using this program you aknowledge the terms and conditions located inside.";
	cout << "\n\nWelcome to Touthwee's Solutions! This is a text adventure game based on a man who is looking to solve all the PC problems in the world.\n";
	cout << "What would you like to do, learn how to fix computers(1), or play minecwaft(2)?\n";
	cin >> menuchoice;
	if (menuchoice == "1") {
		cout << "Congrats! Now you can fix a PC!\n";
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
choice1_1: //comes from learning to fix a pc
	cout << "Would you like to go to play video games(1) or learn how to speak clearly(2)?\n";
	cin >> menuchoice;
	if (menuchoice == "1") {
		cout << "You played a great round of CSGO and ranked up to Silver 2! Great job!\n";
		goto choice2_1;
	}
	else if(menuchoice == "2") {
		cout << "You learned how to speak clearly!\n";
		speaksclearly = 1; //used to determine if you live in a later interaction.
		goto choice2_2;
	}
	else {
		cout << "Incorrect choice. Enter 1 or 2.\n";
		goto choice1_1;
	}
choice2_1: //comes from playing video games at choice1_1_1
	cout << "Would you like to go to the store(1) or look around the web for hiring companies(2)?" << endl;
	cin >> menuchoice;
	if (menuchoice == "1") {
		cout << "You encounter a  man on your way to the store.\n";
		cout << "You walk past him but he grabs your shoulder and says...\n";
		cout << "EY YO MAN YOU LOOK LIKE YOU KNOW HOW TO FIX COMPUTERS, FIX MY PC OR IMMA BLAST YOU\n";
		goto choice3_1;
	}
	else if (menuchoice == "2") {
		cout << "You come across";
	}
	else {
		cout << "Enter 1 or 2!\n";
		goto choice2_1;
	}
choice2_2: //comes from learning to speak clearly at choice1_1_2
	cout << "What would you like to do?\n(1)Go to the store or stay at home and browse the web(2)?\n";
	cin >> menuchoice;
	if (menuchoice == "1") {
		cout << "You encounter a  man on your way to the store.\n";
		cout << "You walk past him but he grabs your shoulder and says...\n";
		cout << "HEY MAN YOU LOOK LIKE YOU KNOW HOW TO FIX COMPUTERS, FIX MY PC OR IMMA BLAST YOU\n";
		goto choice3_1;
	}
	else if (menuchoice == "2") {
		cout << "You encounter some very nice pictures of cabo.";
		goto choice3_2;
	}
	else {
		cout << "Enter 1 or 2!\n";
	}
choice3_1: //coming from going to store at choice2_2_1
	cout << "Would you like to fix his PC(1), run(2), pull out your gun(3), or talk your way out of it.(4)\n";
	cin >> menuchoice;
	if (menuchoice == "1") {
		cout << "You give in and fix his PC.\n";
	}
	else if (menuchoice == "2") {
		cout << "You forget that people here are well trained in atheltics. You are able to escape around a corner for a moment, however \nthe man jumps off a nearby roof and shoots you in the head.";
		death();
		goto p1;
	}
	else if (menuchoice == "3") {
		cout << "You pull out your gun, however, the man already has his pulled.\nYou die.\n";
		death();
		goto p1;
	}
	else if (menuchoice == "4") {
		if (speaksclearly == 1) {
			cout << "What are you going to say?: ";
			cin >> response;
			cout << "You say: " << response << endl;
			cout << "Yeah whatever man if I catch you again you gonna fix my pc or die.";
			goto choice4_4;
		}
		else {
			cout << "What are you going to say?\n";
			cin >> response;
			cout << "You say: " << response << endl;
			cout << "Man you ain't gonna talk out of this by stumbling over your words.";
			death();
			goto p1;
		}
	}
	else {
		cout << "Enter 1-4!\n";
		goto choice3_1;
	}
choice3_2:
	cout << "What would you like to do about these, close them and go to bed for the night(1) or download them for later(2)\n";
	cin >> menuchoice;
	if (menuchoice == "1") {
		cout << "You clicked out of the pictures and go to bed for the night\n";
	}
	else if (menuchoice == "2") {
		cout << "You download the pictures for later\n";
		downloadedpictures = 1;
	}
choice4_4:

minecwaft: //what happens if you play minecwaft
		r = rand() % 100 + 1;
		cout << "Welcome to Minecwaft! Mine? (1 for Y 2 for N)\n";
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
				cout << "Invalid Selection.\n";
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
			else if (menuchoice == "exit") {
				cout << "Are your sure? (y or n)\n";
				cin >> menuchoice;
				if (menuchoice == "n") {
					goto minecwaft;
				}
				else {
					system("pause");
					return 0;
				}
			}
			else {
				cout << "Invalid Selection.\n";
				goto minecwaft;
			}
  system("pause");
  return 0;
}