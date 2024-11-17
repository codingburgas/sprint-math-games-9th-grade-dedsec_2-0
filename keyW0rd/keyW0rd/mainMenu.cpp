#include <iostream>
#include "mainMenu.h"

using namespace std;
void mainMenu() {

	int num;
	cout << "Welcome to the game." << endl;
	cout << "Enter 1 to start" << endl;
	cin >> num;

	if (num == 1) {

		cout << "The game has started.";


	}
	else {

		cout << "Come back later.";

	}
}