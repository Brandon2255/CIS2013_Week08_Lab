#include <iostream>
#include <string>
#include "dice.cpp"

using namespace std;

class Cat {
	public:
		int size = 0;
		string breed = "house";
	
		void roar(){
		//	int size = 45;
			cout << "The " << size << " inch cat says.. Roar!!" << breed << endl;

		}
};





	
int main() {
	

	
	Cat tiger;
	Cat house;
	cout << "we have a cat " << endl;
	tiger.size = 45;
	tiger.breed = "tiger";
	tiger.roar();
	
		cout << "we have a 2nd cat " << endl;
	house.size = 20;
	house.breed = "house";
	house.roar();
	
	
		cout << "Create a 6 sided dice" << endl;
	
	Dice d6;
	Dice d8;
	d8.setNumberOfSides(8);
	d6.setNumberOfSides(6);
	cout << "Roll the dice" << endl;
	
	cout <<" the dice rolls a " << d6.roll() << endl;
	cout <<" the 8 sided dice rolls " << d8.roll() << endl;
	return 0;
	
	
	
	
return 0;
}