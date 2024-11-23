#include <iostream>
#include "gameMechanics.h"
#include <random>
#include <string>

using namespace std;
void gameMechanics() {
    cout << "\nYou have 6 attempts to guess the 4 words!" << endl;

    int attempts = 12;
    string guess;
    string secretW0rds[50] = { "apple", "mango", "grape", "peach", "lemon",
                               "berry", "melon", "liver", "stone", "flame",
                               "tiger", "mouse", "paper", "viper", "craft",
                               "plane", "house", "wheel", "grape", "night",
                               "light", "table", "chair", "stone", "hello",
                               "world", "magic", "bunny", "flock", "pearl",
                               "music", "dance", "green", "shoes", "clash",
                               "water", "money", "juice", "stone", "lemon",
                               "whale", "beach", "dolly", "shark", "cloud",
                               "flame", "glove", "truck", "party", "zebra" };

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

            if (guess == secretW0rds[i]) {
                cout << "Correct!" << endl;
            }
            else {
                for (int j = 0; j < 5; j++) {
                    if (guess[j] == secretW0rds[i][j]) {
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
        cout << "Word " << i + 1 << ": " << secretW0rds[i] << endl;
    }
    cout << "Better luck next time!" << endl;
}