#include <iostream>
#include "gameMechanics.h"
#include "randomWords.h"
#include <random>
#include <string>

using namespace std;

void gameMechanics()
{
    cout << "\n You have 12 attempts to guess the 4 words!" << endl;

    string secretWords[4];
    randomWords(secretWords);

    int attempts = 12;
    string guess;

    bool isCorrect[4] = { false, false, false, false };

    while (attempts > 0) {
        cout << "\n Attempts left: " << attempts << endl;
        cout << "Enter your guess (5 letters): ";
        cin >> guess;

        if (guess.length() != 5) {
            cout << "\n [!] Please enter a 5-letter word! [!]" << endl;
            continue;
        }

        bool allCorrect = true;

        for (int i = 0; i < 4; i++)
        {
            cout << "\n Word " << i + 1 << ":\n";

            if (isCorrect[i])
            {
                cout << "+---+---+---+---+---+" << endl;
                cout << "| " << secretWords[i][0] << " | " << secretWords[i][1] << " | " << secretWords[i][2] << " | " << secretWords[i][3] << " | " << secretWords[i][4] << " |" << endl;
                cout << "+---+---+---+---+---+" << endl;
                cout << "Correct!" << endl;
            }
            else if (guess == secretWords[i])
            {
                cout << "+---+---+---+---+---+" << endl;
                cout << "| " << guess[0] << " | " << guess[1] << " | " << guess[2] << " | " << guess[3] << " | " << guess[4] << " |" << endl;
                cout << "+---+---+---+---+---+" << endl;
                cout << "Correct!" << endl;

                isCorrect[i] = true;
            }
            else {
                cout << "+---+---+---+---+---+" << endl;
                cout << "| ";
                for (int j = 0; j < 5; j++) {
                    if (guess[j] == secretWords[i][j]) {
                        cout << guess[j] << " | ";
                    }
                    else {
                        cout << "_ | ";
                    }
                }
                cout << endl;
                cout << "+---+---+---+---+---+" << endl;

                allCorrect = false;
            }
        }

        if (allCorrect) {
            cout << "\n==============================================" << endl;
            cout << "\nCongratulations! You've guessed all the words!" << endl;
            cout << "\n==============================================" << endl;
            return;
        }
        attempts--;
    }
    cout << "\n================================" << endl;
    cout << "\nOut of attempts! The words were:" << endl;
    cout << "\n================================" << endl;
    cout << " " << endl;
    for (int i = 0; i < 4; i++) {
        cout << "Word " << i + 1 << ": " << secretWords[i] << endl;
    }

    cout << "Better luck next time!" << endl;
}
