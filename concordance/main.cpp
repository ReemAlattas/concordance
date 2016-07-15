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

//Convert string to lowercase & Remove punctuation & Count no. of sentences
void analyzeText(string& str, int& sentCount) {
    for (int i=0; i < str.length(); i++)
    {
        if(str[i] == '.' || str[i] == '?' || str[i] == '!'){
            sentCount++;
        }
        str[i] = tolower(str[i]);
    }
    str.erase(remove_if(str.begin (), str.end (), ::ispunct), str.end ());
}

//main
int main(int argc, const char * argv[]) {
    
    ifstream myFile;
    string word;
    map <string, int> wordCount;
    int sentCount = 0;
    
    //open file
    myFile.open ("english.txt");
    
    if (!myFile)
    {
        cerr << "File could not be opened!" << endl;
        exit (1);
    }
    
    //cout << "File Opened Successfully!\n";
    
    while (myFile >> word)
    {
        analyzeText(word, sentCount);
        wordCount[word]++;
    }
    
    for (map<string,int>::iterator it=wordCount.begin(); it!=wordCount.end(); ++it)
        std::cout << it->first << " => " << it->second << '\n';
    
    cout << "No of Sentences = " << sentCount << endl;
    
    myFile.close();
    return 0;
}
