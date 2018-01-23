#include "Digimon.h"
#include <Windows.h>

//unique method that displays the info for the digimon builder
#pragma region Info
void Digimon::digimonBuilderInfo() {
	cout << "Welcome to the Digimon Builder! Here, you get to create your very own digimon partner!\n";
	cout << "You will get to create a rookie level, champion level, ultimate level, and mega level digimon!\n";
	cout << "The digimon builder will take you through the steps for creating each level!\n";
	cout << "Have fun~" << endl;
	cout << endl;
}
#pragma endregion Info

//the getters for the variables
#pragma region Getters
string Digimon::getName() {
	return digimonName;
}

string Digimon::getAttribute() {
	return digiAttribute;
}

string Digimon::getColour() {
	return digiColour;
}

string Digimon::getType() {
	return digiType;
}

int Digimon::getAttack() {
	return digiAttack;
}

int Digimon::getDeffense() {
	return digiDeffense;
}

int Digimon::getHP() {
	return digiHP;
}
#pragma endregion Getters

//the setters for the variables
#pragma region Setters
void Digimon::setName(string name) {
	digimonName = name;
}
void Digimon::setColour(string colour) {
	digiColour = colour;
}
void Digimon::setType(string level) {
	digiType = level;
}
void Digimon::setAttribute(string attribute) {
	digiAttribute = attribute;
}

void Digimon::setAttack(int attack) {
	digiAttack = attack;
}
void Digimon::setDeffense(int deffense) {
	digiDeffense = deffense;
}
void Digimon::setHP(int hp) {
	digiHP = hp;
}
#pragma endregion Setters
