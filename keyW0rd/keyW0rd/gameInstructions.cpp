#include <iostream>
#include "gameInstructions.h"
#include "mainMenu.h"

using namespace std;

void gameInstructions()
{
    cout << "[@]=================================================[@]" << endl;
    cout << " |          .______________________________.         |" << endl;
    cout << " |                 HOW TO PLAY keyW0rd               |" << endl;
    cout << " |          .-------------------------------.        |" << endl;
    cout << " [===================================================]" << endl;
    cout << " |         ._______________________________.         |" << endl;
    cout << " |    1.     Guess the secret 5-letter words.        |" << endl;
    cout << " |        You will be guessing 4 words in total.     |" << endl;
    cout << " |                                                   |" << endl;
    cout << " |    2. You have 12 attempts to guess each word.    |" << endl;
    cout << " |                                                   |" << endl;
    cout << " |    3. Feedback will be provided:                  |" << endl;
    cout << " |     - Correct letters in the right position: [X]  |" << endl;
    cout << " |     - Letters not in the word: [_]                |" << endl;
    cout << " |                                                   |" << endl;
    cout << " |    4. Your goal is to guess all 4 words within    |" << endl;
    cout << " |      the allowed attempts!                        |" << endl;
    cout << " |                                                   |" << endl;
    cout << " |    5. If you fail, the correct words will be      |" << endl;
    cout << " |     revealed at the end. Good luck!               |" << endl;
    cout << " |        .---------------------------------.        |" << endl;
    cout << " [===================================================]" << endl;
    cout << " |          ._______________________________.        |" << endl;
    cout << " |            Press Enter to return to menu          |" << endl;
    cout << " |          .-------------------------------.        |" << endl;
    cout << "[@]=================================================[@]" << endl;

    cout << "\nPress Enter to return to the menu";
    cin.ignore(); 
    cin.get();
    
}



