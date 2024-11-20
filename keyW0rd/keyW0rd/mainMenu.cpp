#include <iostream>
#include "mainMenu.h"

using namespace std;
void mainMenu() {

	int num;
	cin >> num;

	cout << "|==============================|" << endl;
	cout << "|     ____________________     |" << endl;
	cout << "|      WELCOME TO keyW0rd      |" << endl;
	cout << "|     --------------------     |" << endl;
	cout << "|==============================|" << endl;
	cout << "|     ____________________     |" << endl;
	cout << "|        1. Start Game         |" << endl;
	cout << "|        2.    Quit            |" << endl;
	cout << "|     --------------------     |" << endl;
	cout << "|==============================|" << endl;

	cout << "PRESS 1 TO START THE GAME" << endl;
	cout << "PRESS 2 TO QUIT" << endl;

		if (num == 1) {
		cout << "The game has started.";
		}
		else if (num == 2) {
			cout << "Goodbye!" << endl;
		}
}