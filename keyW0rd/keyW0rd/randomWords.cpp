#include <iostream>
#include "randomWords.h"
#include <string>
#include <random> 

using namespace std;
void randomWords(string secretWords[4])
{
    string words[] = {
         "apple", "mango", "grape", "peach", "lemon",
         "berry", "melon", "plums", "guava", "limey",
         "pears", "chili", "papaw", "prune", "kiwis",
         "figgy", "basil", "olive", "cocoa", "spice",
         "tiger", "zebra", "shark", "whale", "bunny",
         "viper", "mouse", "rhino", "koala", "otter",
         "eagle", "panda", "snake", "horse", "skunk",
         "muley", "hedge", "swine", "finch", "puppy",
         "paper", "chair", "table", "flame", "cloud",
         "wheel", "truck", "glove", "clock", "phone",
         "piano", "couch", "spoon", "brush", "cupro",
         "bagel", "chain", "swing", "latch", "paint",
         "stone", "beach", "river", "plant", "field",
         "storm", "night", "light", "bloom", "rocks",
         "earth", "ocean", "hills", "grass", "winds",
         "bough", "leaky", "dunes", "flora", "seeds",
         "craft", "party", "money", "juice", "magic",
         "dance", "music", "house", "plane", "tower",
         "robot", "space", "giant", "laugh", "lobby",
         "ready", "clear", "brain", "charm", "smile",
         "green", "black", "white", "amber", "brown",
         "spine", "ivory", "olive", "coral", "pearl",
         "azure", "flora", "plume", "salty", "beige",
         "peach", "sunny", "pearl", "neons", "write",
         "slice", "pluck", "grasp", "reach", "think",
         "blink", "smash", "carve", "stack", "climb",
         "clean", "paint", "start", "spill", "curve",
         "align", "break", "drive", "throw", "brave",
         "smart", "quiet", "rough", "risky", "candy",
         "sugar", "storm", "fresh", "block", "faith",
         "pride", "power", "valor", "noble", "trend",
         "funny", "weird", "mildy", "amber", "mount"

    };

    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dis(0, 155);

    for (int i = 0; i < 4; i++) {
        int randomIndex = dis(gen);
        secretWords[i] = words[randomIndex];
    }
 
}
