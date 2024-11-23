#include <iostream>
#include "mainMenu.h"

using namespace std;

void mainMenu() {

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
    
    int num;
    cin >> num;

    if (num == 1) {
        cout << "The game has started." << endl;
    }
    else if (num == 2) {
        cout << "Goodbye!" << endl;
    }
    else {
        cout << "Invalid choice. Please restart the program." << endl;
    }

}
