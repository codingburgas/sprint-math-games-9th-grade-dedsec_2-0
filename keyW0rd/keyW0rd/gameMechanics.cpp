#include <iostream>
#include "gameMechanics.h"
#include "randomWords.h"
#include <random>
#include <string>

using namespace std;
void gameMechanics() {
    cout << "\nYou have 12 attempts to guess the 4 words!" << endl;

    string secretWords[4];
    randomWords(secretWords);

    int attempts = 12;
    string guess;
    

    while (attempts > 0) {
        cout << "\nAttempts left: " << attempts << endl;
        cout << "Enter your guess (5 letters): ";
        cin >> guess;

        if (guess.length() != 5) {
            cout << "Please enter a 5-letter word." << endl;
            continue;
        }

        bool allCorrect = true;

        for (int i = 0; i < 4; i++) {
            cout << "Word " << i + 1 << ": ";

            if (guess == secretWords[i]) {
                cout << "Correct!" << endl;
            }
            else {
                for (int j = 0; j < 5; j++) {
                    if (guess[j] == secretWords[i][j]) {
                        cout << guess[j] << " ";
                    }
                    else {
                        cout << "_ ";
                    }
                }
                cout << endl;
                allCorrect = false;
            }
        }

        if (allCorrect) {
            cout << "\nCongratulations! You've guessed all the words!" << endl;
            return;
        }
        attempts--;
    }

    cout << "\nOut of attempts! The words were:" << endl;
    for (int i = 0; i < 4; i++) {
        cout << "Word " << i + 1 << ": " << secretWords[i] << endl;
    }
    cout << "Better luck next time!" << endl;
}