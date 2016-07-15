//
//  main.cpp
//  concordance
//
//  Created by Reem Alattas on 7/15/16.
//  Copyright © 2016 ReemAlattas. All rights reserved.
//

#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, const char * argv[]) {
    
    ifstream myFile;
    myFile.open ("english.txt");
    
    if (!myFile)
    {
        cerr << "File could not be opened!" << endl;
        exit (1);
    }
    
    char word[30];
    
    while (myFile >> word)
        cout << word << "\n";
    
    return 0;
}
