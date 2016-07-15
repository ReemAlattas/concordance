//
//  main.cpp
//  concordance
//
//  Created by Reem Alattas on 7/15/16.
//  Copyright © 2016 ReemAlattas. All rights reserved.
//

#include <iostream>
#include <fstream>
#include <cstring>
#include <map>

using namespace std;

int main(int argc, const char * argv[]) {
    
    ifstream myFile;
    myFile.open ("english.txt");
    
    if (!myFile)
    {
        cerr << "File could not be opened!" << endl;
        exit (1);
    }
    
    map <string, int> wordCount;
    
    
        
    
    return 0;
}
