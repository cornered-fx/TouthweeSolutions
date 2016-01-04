// TouthweeSolutions.cpp : Defines the entry point for the console application.
// Copyright (C) 2015 Tyler Humphrey https://github.com/Minedmaster/TouthweeSolutions/
// Terms of use and more at LICENSE.md. You may not use this program without accepting these terms.
// By using this program you aknowledge the terms and conditions located inside.
// If the copy of the license is not included, you may not use this program. Offical copy located at https://github.com/Minedmaster/TouthweeSolutions/blob/master/LICENSE.md
#include <iostream>
#include <ctime>
#include <string>
#include <stdlib.h>
using namespace std;

void death() {
    string menuChoice;
    time_t now = time(0);
    char* dt = ctime(&now);
    death:
    cout << "You died at: " << dt << endl;
    cout << "Game over. Restart? (y or n)\n";
    cin >> menuChoice;
    if (menuChoice == "y") {
        return;
    }
    else if (menuChoice == "n"){
        exit(0);
        system("pause");
    }
    else {
        system("CLS");
        cout << "Enter a valid option.\n";
        goto death;
    }
}

int main()
{
    p1:
    string response;
    string menuChoice;
	int diamond = 0, stone = 0, wood = 0, ore = 0, iron = 0, gold = 0, redstone = 0, lapis = 0, oreThisTurn = 0, diamondSword = 0,
		diamondShovel = 0, diamondPick = 0, goldPick = 0, goldShovel = 0, goldSword = 0, ironPick = 0, ironShovel = 0, ironSword = 0,
		stonePick = 0, stoneShovel = 0, stoneSword = 0, woodPick = 0, woodShovel = 0, woodSword = 0, diamondPickDurability = 0, goldPickDurability = 0, 
		ironPickDurability = 0, stonePickDurability = 0, woodPickDurability = 0;
    int r = 0; //used in the random number gen
    int replay = 5; //used as a life counter
    int speaksClearly = 0; // used in option 4 in an encounter with a man on your way to the store and in other situations.
    int downloadedPictures = 0; //used for an encounter when you bring someone home and attempt to watch a movie with them.
    cout << "Copyright (C) 2015 Tyler Humphrey\nTerms of use and more at README.md.\nYou may not use this program without accepting these terms.\nBy using this program you aknowledge the terms and conditions located inside.";
    cout << "\n\nWelcome to Touthwee's Solutions! This is a text adventure game based on a man who is looking to solve all the PC problems in the world.\n";
    cout << "What would you like to do, learn how to fix computers(1), or play minecwaft(2)?\n";
    cin >> menuChoice;
    if (menuChoice == "1") {
        cout << "Congrats! Now you can fix a PC!\n";
        goto choice1_1;
    }
    else if (menuChoice == "2") {
        cout << "Success! You played minecwaft!\n";
        goto minecwaft;
    }
    else {
        system("CLS");
        cout << "Invalid option. Enter 1 or 2!\n";
        goto p1;
    }
    choice1_1: //comes from learning to fix a pc
    cout << "Would you like to go to play video games(1) or learn how to speak clearly(2)?\n";
    cin >> menuChoice;
    if (menuChoice == "1") {
        cout << "You played a great round of CSGO and ranked up to Silver 2! Great job!\n";
        goto choice2_1;
    }
    else if(menuChoice == "2") {
        cout << "You learned how to speak clearly!\n";
        speaksClearly = 1; //used to determine if you live in a later interaction.
        goto choice2_2;
    }
    else {
        cout << "Incorrect choice. Enter 1 or 2.\n";
        goto choice1_1;
    }
    choice2_1: //comes from playing video games at choice1_1_1
    cout << "Would you like to go to the store(1) or look around the web for hiring companies(2)?" << endl;
    cin >> menuChoice;
    if (menuChoice == "1") {
        cout << "You encounter a man on your way to the store.\n";
        cout << "You walk past him but he grabs your shoulder and says...\n";
        cout << "EY YO MAN YOU LOOK LIKE YOU KNOW HOW TO FIX COMPUTERS, FIX MY PC OR IMMA BLAST YOU\n";
        goto choice3_1;
    }
    else if (menuChoice == "2") {
        goto choice3_3;
    }
    else {
        cout << "Enter 1 or 2!\n";
        goto choice2_1;
    }
    choice2_2: //comes from learning to speak clearly at choice1_1_2
    cout << "What would you like to do?n(1)Go to the store or stay at home and browse the web(2)?\n";
    cin >> menuChoice;
    if (menuChoice == "1") {
        cout << "You encounter a man on your way to the store.\n";
        cout << "You walk past him but he grabs your shoulder and says...\n";
        cout << "HEY MAN YOU LOOK LIKE YOU KNOW HOW TO FIX COMPUTERS, FIX MY PC OR IMMA BLAST YOU\n";
        goto choice3_1;
    }
    else if (menuChoice == "2") {
        cout << "You encounter some very nice pictures of a Mexican Villa.";
        goto choice3_2;
    }
    else {
        system("CLS");
        cout << "Enter 1 or 2!\n";
        goto choice2_2;
    }
    choice3_1: //coming from going to store at choice2_2_1
    cout << "Would you like to fix his PC(1), run(2), pull out your gun(3), or talk your way out of it.(4)\n";
    cin >> menuChoice;
    if (menuChoice == "1") {
        cout << "You give in and fix his PC.\n";
    }
    else if (menuChoice == "2") {
        cout << "You forget that people here are well trained in atheltics. You are able to escape around a corner for a moment, however \nthe man jumps off a nearby roof and shoots you in the head.";
        death();
        goto p1;
    }
    else if (menuChoice == "3") {
        cout << "You pull out your gun, however, the man already has his pulled.nYou die.\n";
        death();
        goto p1;
    }
    else if (menuChoice == "4") {
        if (speaksClearly == 1) {
            cout << "What are you going to say?\n";
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
    cin >> menuChoice;
    if (menuChoice == "1") {
        cout << "You clicked out of the pictures and go to bed for the night\n";
    }
    else if (menuChoice == "2") {
        cout << "You download the pictures for later\n";
        downloadedPictures = 1;
    }
    choice3_3:
    cout << "You come across a company who advertises themselves as an IT company looking for a new employee with skills in PC Repair\n";
    cout << "Would you like to call them and submit a resume? (y or n)\n";
    cin >> menuChoice;
    if (menuChoice == "y") {
        
    }
    else if (menuChoice == "n") {
        
    }
    else {
        cout << "Enter a valid option! (y or n)\n";
    }
    choice4_4:
    
    minecwaft: //what happens if you play minecwaft
    cout << "Welcome to Minecwaft!\n";
    cout << "If you would like to craft, type c at any time.\n";
    minecwaft2:
    r = rand() % 100 + 1;
    cout << "Mine? (1 for Y 2 for N)\n";
    cin >> menuChoice;
    if (ore >= 1 | stone >= 1) {
        cout << "Stone:" << stone << "Diamond: " << diamond << "\nIron: " << iron << "\nGold: " << gold << "\nRedstone: " << redstone << "\nLapis Lazuli: " << lapis << "\nTotal Ore: " << ore << endl;
		if (menuChoice == "c") {
			crafting:
			system("CLS");
			cout << "Stone:" << stone << "Diamond: " << diamond << "\nIron: " << iron << "\nGold: " << gold << "\nRedstone: " << redstone << "\nLapis Lazuli: " << lapis << "\nTotal Ore: " << ore << endl;
			cout << "Crafting Options.\nType the abbrivation for what you would like to craft I.E. dpick, dshovel, dsword\n";
			if (diamond >= 1) {
					cout << " Diamond Spade ";
				if (diamond >= 2) {
					cout << " Diamond Sword ";
				}
				if (diamond >= 3) {
					cout << " Diamond Pick ";
				}
			}
			if (iron >= 1) {
				cout << " Iron Shovel ";
				if (iron >= 2) {

				}
				if (iron >= 3) {

				}
			}
			if (gold >= 1) {
				cout << " Gold Shovel ";
				if (gold >= 2) {

				}
				if (gold >= 3) {

				}
			}
			if (stone >= 1) {
				cout << " Stone Shovel ";
				if (stone >= 2) {

				}
				if (stone >= 3) {

				}
			}
			if (wood >= 1) {
				cout << " Wooden Shovel ";
				if (wood >= 2) {

				}
				if (wood >= 3) {

				}
			}
			cout << endl;
			cin >> menuChoice;
			if (menuChoice == "dshovel") {
				if (diamond >= 1) {
					diamondShovel++;
					diamond -= 1;
					cout << "You crafted a Diamond Shovel!\n";
				}
			}
			if (menuChoice == "dsword") {
				if (diamond >= 2) {
					diamondSword++;
					diamond -= 2;
				}
			}
			if (menuChoice == "dpick") {
				if (diamond >= 3) {
					diamondPick++;
					diamondPickDurability += 300;
					diamond -= 3;
				}
			}
			if (menuChoice == "ishovel") {
				if (iron >= 1) {
					ironShovel++;
					iron -= 1;
					cout << "You crafted a Diamond Shovel!\n";
					goto crafting;
				}
			}
			if (menuChoice == "isword") {
				if (iron >= 2) {
					ironSword++;
					iron -= 2;
				}
			}
			if (menuChoice == "ipick") {
				if (iron >= 3) {
					ironPick++;
					ironPickDurability += 100;
					iron -= 3;
				}
			}
			
			if (menuChoice == "gshovel") {
				if (gold >= 1) {
					goldShovel++;
					gold -= 1;
					cout << "You crafted a Diamond Shovel!\n";
					goto crafting;
				}
			}
			if (menuChoice == "gsword") {
				if (gold >= 2) {
					goldSword++;
					gold -= 2;
				}
			}
			if (menuChoice == "gpick") {
				if (gold >= 3) {
					goldPick++;
					goldPickDurability += 50;
					gold -= 3;
				}
			}
			
			if (menuChoice == "sshovel") {
				if (iron >= 1) {
					ironShovel++;
					iron -= 1;
					cout << "You crafted a Diamond Shovel!\n";
					goto crafting;
				}
			}
			if (menuChoice == "ssword") {
				if (iron >= 2) {
					ironSword++;
					iron -= 2;
				}
			}
			if (menuChoice == "spick") {
				if (stone >= 3) {
					stonePick++;
					stonePickDurability += 30;
					stone -= 3;
				}
			}
			
			if (menuChoice == "wshovel") {
				if (wood >= 1) {
					woodShovel++;
					wood -= 1;
					cout << "You crafted a Diamond Shovel!\n";
					goto crafting;
				}
			}
			if (menuChoice == "wsword") {
				if (wood >= 2) {
					woodSword++;
					wood -= 2;
				}
			}
			if (menuChoice == "wpick") {
				if (wood >= 3) {
					woodPick++;
					woodPickDurability += 10;
					wood -= 3;
				}
			}
			else {
				cout << "Invalid choice! Exit and continue(1) or re-enter your choice(2).";
				if (menuChoice == "1") {
					goto minecwaft2;
				}
				else {
					goto crafting;
				}
			}
		}
    }
	else if (menuChoice == "c") {
		cout << "You don't have enough materials!\n";
	}
    if (menuChoice == "1") {
		if (r == 1) { //Diamond found!
            cout << "You found some diamond!\n";
            if (diamondPick == 1) {
				r = rand() % 100 + 1;
                cout << "You have a diamond pick. Use it?(y or n)\n";
				cin >> menuChoice;
				if (menuChoice == "y") {
					diamondPickDurability--;
					/*Implement enchanting later.
					if (r == 10) {
						diamond++;
						ore++;
						cout << "You got a diamonds!\n";
						goto minecwaft2;
					}*/
				}
            }
			if (ironPick == 1) {
				r = rand() % 100 + 1;
				cout << "You have a iron pick. Use it?(y or n)\n";
				cin >> menuChoice;
				if (menuChoice == "y") {
					ironPickDurability--;
					/*Implement enchanting later.
					if (r == 10) {
						diamond++;
						ore++;
						cout << "You got a diamond!\n";
						goto minecwaft2;
					}*/
				}
			}
			else {
				cout << "You need at least an iron pick to mine this!";
				goto minecwaft2;
			}
        }
        else if (r <= 11) {
            if (diamondPick == 1) {
				r = rand() % 100 + 1;
                cout << "You have a diamond pick. Use it?(y or n)\n";
				cin >> menuChoice;
				if (menuChoice == "y") {
					diamondPickDurability--;
					/* Implement enchanting at some point.
					if (r == 10) {
						diamond++;
						ore++;
						cout << "You got a diamond!\n";
						goto minecwaft2;
					}*/
				}
            }
			if (ironPick == 1) {
				r = rand() % 100 + 1;
				cout << "You have a iron pick. Use it?(y or n)\n";
				cin >> menuChoice;
				if (menuChoice == "y") {
					ironPickDurability--;
					/* Implement enchanting later.
					if (r == 10) {
						diamond++;
						ore++;
						cout << "You got a diamond!\n";
						goto minecwaft2;
					}*/
				}
			}
			else {
				cout << "You need at least an iron pick to mine this!";
				goto minecwaft2;
			}cout << "You got some Iron\n";
            ore++;
            iron++;
            goto minecwaft2;
        }
        else if (r <= 16) {
            cout << "You got some Redstone\n";
            ore++;
            redstone++;
            goto minecwaft2;
        }
        else if (r <= 26) {
            cout << "You got some gold\n";
            ore++;
            gold++;
            goto minecwaft2;
        }
        else {
            cout << "You got stone.\n";
			stone++;
        }
        goto minecwaft2;
    }
    else {
        cout << "Invalid Selection.\n";
        goto minecwaft2;
    }
    system("pause");
    return 0;
}
