/*
Title: Assignment 3
Auhtor: Leyalee Alsaadi
Objective: the objective of this assignment was to create a class that asks the user to input their answers
depending on what we decided to build. The user would be inputing their answers to the setters and the getters 
would retrieve the answers and display them to the user on the console window.
*/

//the libraries used within the program along as the header file
//for the Digimon class
#include "Digimon.h"
#include <string>
#include <vector>
#include <cstdlib>
#include <Windows.h>

//function used to tell something where to go based
//on the x and y coordinates
void gotoXcoorYcoor(int xCoor, int yCoor);
//function that draws the title
void digimonTitle();

//the main function
int main() {
	//variables to hold the option the user enters
	int option;
	//string variables for the info entered by the user
	string name;
	string colour;
	string attribute;
	string type;
	string crest; 
	//integer variables for the info entered by the user
	int attack;
	int hp;
	int deffense;
	//a counter to keep track of which digimon is being made
	int digimonCounter = 0;
	//variables for the x and y coordinates
	int xCoor = 0;
	int yCoor = 0;

	//calling the function that displays the digimon builder title
	digimonTitle();
	//creating a object of the digimon class called info
	Digimon info = Digimon();
	//info calls the unique method digimonBuilderInfo which displays info about the digimon builder
	info.digimonBuilderInfo();
	
	//creates a vector that will hold the four digimon objects that will be created
	vector<Digimon> digimons = vector<Digimon>();

	//creates a temporary digimon object to be pushed back into the digimons vector
	Digimon tempdigimon = Digimon();
	//for loop that goes through 4 times checking which number it is at
	//and outputs which digimon level is being created
	//then asks the user to enter information and calls the the setters
	//and sets the information
	for (int i = 0; i < 4; i++) {
		if (digimonCounter == 0) {
			cout << "Rookie Digimon:" << endl;
		}
		else if (digimonCounter == 1) {
			cout << "Champion Digimon:" << endl;
		}
		else if (digimonCounter == 2) {
			cout << "Ultimate Digimon:" << endl;
		}
		else if (digimonCounter == 3) {
			cout << "Mega Digimon:" << endl;
		}

		cout << "Enter Name of Digimon: ";
		cin >> name;
		tempdigimon.setName(name);
		cout << "Enter colour of Digimon: ";
		cin >> colour;
		tempdigimon.setColour(colour);
		cout << "Enter Attribute of Digimon: ";
		cin >> attribute;
		tempdigimon.setAttribute(attribute);
		cout << "Enter digimon Type: ";
		cin >> type;
		tempdigimon.setType(type);
		cout << "Enter the digimon attack power: ";
		cin >> attack;
		tempdigimon.setAttack(attack);
		cout << "Enter the digimon hp: ";
		cin >> hp;
		tempdigimon.setHP(hp);
		cout << "Enter the digimon defense: ";
		cin >> deffense;
		tempdigimon.setDeffense(deffense);
		//appending the information entered by the user
		//to the end of the vector
		digimons.push_back(tempdigimon);
		digimonCounter++;

		system("CLS");
	}
	//asks the user to enter 1 to see the digimon they created
	cout << "See you digimon!" << endl;
	cout << "Enter 1" << endl;
	cin >> option;
	//makes sure the user enters 1
	while (option != 1) {
		cout << "Please enter 1 to see your digimon!" << endl;
		cin >> option;
	}
	system("CLS");
	
	//when the user enters 1, a for loop loops through the vector
	//and dipslays the information that the user entered
	//a counter also keeps track of which digimon is being shown
	//and displays the name on top
	if (option == 1) {
		digimonCounter = 0;
			
		for (int i = 0; i < 4; i++) {
			//gotoXcoorYcoor(xCoor, yCoor);
			if (digimonCounter == 0) {
				cout << "Rookie Digimon:" << endl;
			}
			else if (digimonCounter == 1) {
				cout << "Champion Digimon:" << endl;
			}
			else if (digimonCounter == 2) {
				cout << "Ultimate Digimon:" << endl;
			}
			else if (digimonCounter == 3) {
				cout << "Mega Digimon:" << endl;
			}

			cout << "Digimon Name: " << digimons[i].getName() << endl;
			cout << "Digimon Colour: " << digimons[i].getColour() << endl;
			cout << "Digimon Attribute: " << digimons[i].getAttribute() << endl;
			cout << "Digimon Type: " << digimons[i].getType() << endl;
			cout << "Digimon attack power: " << digimons[i].getAttack() << endl;
			cout << "Digimon hp: " << digimons[i].getHP() << endl;
			cout << "Digimon deffense: " << digimons[i].getDeffense() << endl;

			digimonCounter++;
			cout << endl;
		}
	}
	system("Pause");
	return 0;
}

//function that prints out the digimon builder title in ASCCI characters
void digimonTitle() {
	//D
	gotoXcoorYcoor(0, 0);
	cout << (char)201 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)187 << (char)255 << endl;
	cout << (char)186 << (char)255 << (char)255 << (char)255 << (char)255 << (char)255 << (char)255 << (char)200 << (char)187 << endl;
	cout << (char)186 << (char)255 << (char)255 << (char)201 << (char)205 << (char)187 << (char)255 << (char)255 << (char)186 << endl;
	cout << (char)186 << (char)255 << (char)255 << (char)200 << (char)205 << (char)188 << (char)255 << (char)255 << (char)186 << endl;
	cout << (char)186 << (char)255 << (char)255 << (char)255 << (char)255 << (char)255 << (char)255 << (char)201 << (char)188 << endl;
	cout << (char)200 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)188 << (char)255 << endl;
	//I
	gotoXcoorYcoor(9, 0);
	cout << (char)201 << (char)205 << (char)205 << (char)205 << (char)187 << endl;
	gotoXcoorYcoor(9, 1);
	cout << (char)186 << (char)255 << (char)255 << (char)255 << (char)186 << endl;
	gotoXcoorYcoor(9, 2);
	cout << (char)186 << (char)255 << (char)255 << (char)255 << (char)186 << endl;
	gotoXcoorYcoor(9, 3);
	cout << (char)186 << (char)255 << (char)255 << (char)255 << (char)186 << endl;
	gotoXcoorYcoor(9, 4);
	cout << (char)186 << (char)255 << (char)255 << (char)255 << (char)186 << endl;
	gotoXcoorYcoor(9, 5);
	cout << (char)200 << (char)205 << (char)205 << (char)205 << (char)188 << endl;
	//G
	gotoXcoorYcoor(14, 0);
	cout << (char)201 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)187 << endl;
	gotoXcoorYcoor(14, 1);
	cout << (char)186 << (char)255 << (char)255 << (char)201 << (char)205 << (char)205 << (char)205 << (char)187 << (char)255 << (char)186 << endl;
	gotoXcoorYcoor(14, 2);
	cout << (char)186 << (char)255 << (char)255 << (char)186 << (char)255 << (char)255 << (char)255 << (char)200 << (char)205 << (char)188 << endl;
	gotoXcoorYcoor(14, 3);
	cout << (char)186 << (char)255 << (char)255 << (char)186 << (char)255 << (char)205 << (char)205 << (char)205 << (char)205 << (char)187 << endl;
	gotoXcoorYcoor(14, 4);
	cout << (char)186 << (char)255 << (char)255 << (char)200 << (char)205 << (char)205 << (char)205 << (char)188 << (char)255 << (char)186 << endl;
	gotoXcoorYcoor(14, 5);
	cout << (char)200 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)188 << endl;
	//I
	gotoXcoorYcoor(25, 0);
	cout << (char)201 << (char)205 << (char)205 << (char)205 << (char)187 << endl;
	gotoXcoorYcoor(25, 1);
	cout << (char)186 << (char)255 << (char)255 << (char)255 << (char)186 << endl;
	gotoXcoorYcoor(25, 2);
	cout << (char)186 << (char)255 << (char)255 << (char)255 << (char)186 << endl;
	gotoXcoorYcoor(25, 3);
	cout << (char)186 << (char)255 << (char)255 << (char)255 << (char)186 << endl;
	gotoXcoorYcoor(25, 4);
	cout << (char)186 << (char)255 << (char)255 << (char)255 << (char)186 << endl;
	gotoXcoorYcoor(25, 5);
	cout << (char)200 << (char)205 << (char)205 << (char)205 << (char)188 << endl;
	//M
	gotoXcoorYcoor(30, 0);
	cout << (char)201 << (char)205 << (char)205 << (char)187 << (char)255 << (char)255 << (char)201 << (char)205 << (char)205 << (char)187 << endl;
	gotoXcoorYcoor(30, 1);
	cout << (char)186 << (char)255 << (char)255 << (char)200 << (char)205 << (char)205 << (char)188 << (char)255 << (char)255 << (char)186 << endl;
	gotoXcoorYcoor(30, 2);
	cout << (char)186 << (char)255 << (char)255 << (char)255 << (char)255 << (char)255 << (char)255 << (char)255 << (char)255 << (char)186 << endl;
	gotoXcoorYcoor(30, 3);
	cout << (char)186 << (char)255 << (char)255 << (char)201 << (char)187 << (char)201 << (char)187 << (char)255 << (char)255 << (char)186 << endl;
	gotoXcoorYcoor(30, 4);
	cout << (char)186 << (char)255 << (char)255 << (char)186 << (char)200 << (char)188 << (char)186 << (char)255 << (char)255 << (char)186 << endl;
	gotoXcoorYcoor(30, 5);
	cout << (char)200 << (char)205 << (char)205 << (char)188 << (char)255 << (char)255 << (char)200 << (char)205 << (char)205 << (char)188 << endl;
	//O
	gotoXcoorYcoor(40, 0);
	cout << (char)255 << (char)201 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)187 << (char)255 << endl;
	gotoXcoorYcoor(40, 1);
	cout << (char)201 << (char)188 << (char)255 << (char)255 << (char)255 << (char)255 << (char)255 << (char)255 << (char)200 << (char)187 << endl;
	gotoXcoorYcoor(40, 2);
	cout << (char)186 << (char)255 << (char)255 << (char)201 << (char)205 << (char)205 << (char)187 << (char)255 << (char)255 << (char)186 << endl;
	gotoXcoorYcoor(40, 3);
	cout << (char)186 << (char)255 << (char)255 << (char)200 << (char)205 << (char)205 << (char)188 << (char)255 << (char)255 << (char)186 << endl;
	gotoXcoorYcoor(40, 4);
	cout << (char)200 << (char)187 << (char)255 << (char)255 << (char)255 << (char)255 << (char)255 << (char)255 << (char)201 << (char)188 << endl;
	gotoXcoorYcoor(40, 5);
	cout << (char)255 << (char)200 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)188 << (char)255 << endl;
	//N
	gotoXcoorYcoor(50, 0);
	cout << (char)201 << (char)205 << (char)205 << (char)205 << (char)187 << (char)255 << (char)255 << (char)201 << (char)205 << (char)187 << endl;
	gotoXcoorYcoor(50, 1);
	cout << (char)186 << (char)255 << (char)255 << (char)255 << (char)200 << (char)187 << (char)255 << (char)186 << (char)255 << (char)186 << endl;
	gotoXcoorYcoor(50, 2);
	cout << (char)186 << (char)255 << (char)255 << (char)255 << (char)255 << (char)200 << (char)205 << (char)188 << (char)255 << (char)186 << endl;
	gotoXcoorYcoor(50, 3);
	cout << (char)186 << (char)255 << (char)255 << (char)255 << (char)201 << (char)187 << (char)255 << (char)255 << (char)255 << (char)186 << endl;
	gotoXcoorYcoor(50, 4);
	cout << (char)186 << (char)255 << (char)255 << (char)255 << (char)186 << (char)200 << (char)187 << (char)255 << (char)255 << (char)186 << endl;
	gotoXcoorYcoor(50, 5);
	cout << (char)200 << (char)205 << (char)205 << (char)205 << (char)188 << (char)255 << (char)200 << (char)205 << (char)205 << (char)188 << endl;
	//B
	gotoXcoorYcoor(0, 7);
	cout << (char)201 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)187;
	gotoXcoorYcoor(0, 8);
	cout << (char)186 << (char)255 << (char)255 << (char)254 << (char)255 << (char)255 << (char)255 << (char)186;
	gotoXcoorYcoor(0, 9);
	cout << (char)186 << (char)255 << (char)255 << (char)255 << (char)205 << (char)205 << (char)205 << (char)202 << (char)205 << (char)187;
	gotoXcoorYcoor(0, 10);
	cout << (char)186 << (char)255 << (char)255 << (char)255 << (char)255 << (char)255 << (char)255 << (char)255 << (char)255 << (char)186;
	gotoXcoorYcoor(0, 11);
	cout << (char)186 << (char)255 << (char)255 << (char)219 << (char)219 << (char)255 << (char)255 << (char)255 << (char)255 << (char)186;
	gotoXcoorYcoor(0, 12);
	cout << (char)200 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)188;
	//U
	gotoXcoorYcoor(11, 7);
	cout << (char)201 << (char)205 << (char)187 << (char)255 << (char)255 << (char)255 << (char)201 << (char)205 << (char)187 << endl;
	gotoXcoorYcoor(11, 8);
	cout << (char)186 << (char)255 << (char)186 << (char)255 << (char)255 << (char)255 << (char)186 << (char)255 << (char)186 << endl;
	gotoXcoorYcoor(11, 9);
	cout << (char)186 << (char)255 << (char)186 << (char)255 << (char)255 << (char)255 << (char)186 << (char)255 << (char)186 << endl;
	gotoXcoorYcoor(11, 10);
	cout << (char)186 << (char)255 << (char)186 << (char)255 << (char)255 << (char)255 << (char)186 << (char)255 << (char)186 << endl;
	gotoXcoorYcoor(11, 11);
	cout << (char)186 << (char)255 << (char)200 << (char)205 << (char)205 << (char)205 << (char)188 << (char)255 << (char)186 << endl;
	gotoXcoorYcoor(11, 12);
	cout << (char)200 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)188 << endl;
	//I
	gotoXcoorYcoor(20, 7);
	cout << (char)201 << (char)205 << (char)205 << (char)205 << (char)187 << endl;
	gotoXcoorYcoor(20, 8);
	cout << (char)186 << (char)255 << (char)255 << (char)255 << (char)186 << endl;
	gotoXcoorYcoor(20, 9);
	cout << (char)186 << (char)255 << (char)255 << (char)255 << (char)186 << endl;
	gotoXcoorYcoor(20, 10);
	cout << (char)186 << (char)255 << (char)255 << (char)255 << (char)186 << endl;
	gotoXcoorYcoor(20, 11);
	cout << (char)186 << (char)255 << (char)255 << (char)255 << (char)186 << endl;
	gotoXcoorYcoor(20, 12);
	cout << (char)200 << (char)205 << (char)205 << (char)205 << (char)188 << endl;
	//L
	gotoXcoorYcoor(25, 7);
	cout << (char)201 << (char)205 << (char)187 << (char)255 << (char)255 << (char)255 << (char)255 << (char)255 << endl;
	gotoXcoorYcoor(25, 8);
	cout << (char)186 << (char)255 << (char)186 << (char)255 << (char)255 << (char)255 << (char)255 << (char)255 << endl;
	gotoXcoorYcoor(25, 9);
	cout << (char)186 << (char)255 << (char)186 << (char)255 << (char)255 << (char)255 << (char)255 << (char)255 << endl;
	gotoXcoorYcoor(25, 10);
	cout << (char)186 << (char)255 << (char)186 << (char)255 << (char)255 << (char)255 << (char)255 << (char)255 << endl;
	gotoXcoorYcoor(25, 11);
	cout << (char)186 << (char)255 << (char)200 << (char)205 << (char)205 << (char)205 << (char)205 << (char)187 << endl;
	gotoXcoorYcoor(25, 12);
	cout << (char)200 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)188 << endl;
	//D
	gotoXcoorYcoor(33, 7);
	cout << (char)201 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)187 << (char)255 << endl;
	gotoXcoorYcoor(33, 8);
	cout << (char)186 << (char)255 << (char)255 << (char)255 << (char)255 << (char)255 << (char)255 << (char)200 << (char)187 << endl;
	gotoXcoorYcoor(33, 9);
	cout << (char)186 << (char)255 << (char)255 << (char)201 << (char)205 << (char)187 << (char)255 << (char)255 << (char)186 << endl;
	gotoXcoorYcoor(33, 10);
	cout << (char)186 << (char)255 << (char)255 << (char)200 << (char)205 << (char)188 << (char)255 << (char)255 << (char)186 << endl;
	gotoXcoorYcoor(33, 11);
	cout << (char)186 << (char)255 << (char)255 << (char)255 << (char)255 << (char)255 << (char)255 << (char)201 << (char)188 << endl;
	gotoXcoorYcoor(33, 12);
	cout << (char)200 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)188 << (char)255 << endl;
	//E
	gotoXcoorYcoor(42, 7);
	cout << (char)201 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)187 << endl;
	gotoXcoorYcoor(42, 8);
	cout << (char)186 << (char)255 << (char)201 << (char)205 << (char)205 << (char)205 << (char)205 << (char)188 << endl;
	gotoXcoorYcoor(42, 9);
	cout << (char)186 << (char)255 << (char)200 << (char)205 << (char)205 << (char)205 << (char)205 << (char)187 << endl;
	gotoXcoorYcoor(42, 10);
	cout << (char)186 << (char)255 << (char)201 << (char)205 << (char)205 << (char)205 << (char)205 << (char)188 << endl;
	gotoXcoorYcoor(42, 11);
	cout << (char)186 << (char)255 << (char)200 << (char)205 << (char)205 << (char)205 << (char)205 << (char)187 << endl;
	gotoXcoorYcoor(42, 12);
	cout << (char)200 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)188 << endl;
	//R
	gotoXcoorYcoor(50, 7);
	cout << (char)201 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)187;
	gotoXcoorYcoor(50, 8);
	cout << (char)186 << (char)255 << (char)255 << (char)254 << (char)255 << (char)255 << (char)255 << (char)186;
	gotoXcoorYcoor(50, 9);
	cout << (char)186 << (char)255 << (char)255 << (char)205 << (char)205 << (char)205 << (char)205 << (char)202 << (char)205 << (char)187;
	gotoXcoorYcoor(50, 10);
	cout << (char)186 << (char)255 << (char)201 << (char)205 << (char)205 << (char)205 << (char)187 << (char)255 << (char)255 << (char)186;
	gotoXcoorYcoor(50, 11);
	cout << (char)186 << (char)255 << (char)186 << (char)255 << (char)255 << (char)255 << (char)186 << (char)255 << (char)255 << (char)186;
	gotoXcoorYcoor(50, 12);
	cout << (char)200 << (char)205 << (char)188 << (char)255 << (char)255 << (char)255 << (char)200 << (char)205 << (char)205 << (char)188 << endl;
}

//function that displays something based on the x and y coordinates passed into it
void gotoXcoorYcoor(int x, int y)
{
	COORD coord;
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}