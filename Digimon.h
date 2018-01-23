#include <iostream>
#include <string>
#include <Windows.h>

using namespace std;

//a class name Digimon
class Digimon
{
//member variables defined as private
private:
	string digimonName;
	string digiColour;
	string digiType;
	string digiAttribute;
	int digiAttack;
	int digiDeffense;
	int digiHP;

//unique method as well as the getters
//and setters that were set to public
public:
	void digimonBuilderInfo();

	string getName();
	string getColour();
	string getType();
	string getAttribute();

	int getAttack();
	int getDeffense();
	int getHP();

	void setName(string name);
	void setColour(string colour);
	void setType(string level);
	void setAttribute(string attribute);
	
	void setAttack(int attack);
	void setDeffense(int deffense);
	void setHP(int hp);
};