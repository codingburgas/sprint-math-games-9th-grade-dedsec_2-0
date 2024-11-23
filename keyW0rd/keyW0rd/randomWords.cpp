#include <iostream>
#include "randomWords.h"
#include <string>
#include <random> 

using namespace std;
void randomWords(string secretWords[4])
{
    string words[] = {
        "apple", "mango", "grape", "peach", "lemon",
        "berry", "melon", "liver", "stone", "flame",
        "tiger", "mouse", "paper", "viper", "craft",
        "plane", "house", "wheel", "grape", "night",
        "light", "table", "chair", "stone", "hello",
        "world", "magic", "bunny", "flock", "pearl",
        "music", "dance", "green", "shoes", "clash",
        "water", "money", "juice", "stone", "lemon",
        "whale", "beach", "dolly", "shark", "cloud",
        "flame", "glove", "truck", "party", "zebra"
    };

    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dis(0, 49);

    for (int i = 0; i < 4; i++) {
        int randomIndex = dis(gen);
        secretWords[i] = words[randomIndex];
    }
 
}
