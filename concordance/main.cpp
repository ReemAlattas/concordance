//
//  main.cpp
//  concordance
//
//  Created by Reem Alattas on 7/15/16.
//  Copyright © 2016 ReemAlattas. All rights reserved.
//

#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
#include <map>

using namespace std;

//Converts string to lowercase & Remove punctuation
void toLower (string& str) {
    for (int i=0; i < str.length(); i++)
        str [i] = tolower(str[i]);
    str.erase(remove_if(str.begin (), str.end (), ::ispunct), str.end ());
}

//main
int main(int argc, const char * argv[]) {
    
    ifstream myFile;
    
    //open file
    myFile.open ("english.txt");
    
    if (!myFile)
    {
        cerr << "File could not be opened!" << endl;
        exit (1);
    }
    
    cout << "File Opened Successfully!\n";
    
    string word;
    //map <string, int> wordCount;
    
    while (myFile >> word)
    {
        toLower(word);
        cout << word << " ";
//        wordCount[word]++;
    }
    
    
//    cout << word << " " << wordCount[word] << endl;
    
    myFile.close();
    return 0;
}
