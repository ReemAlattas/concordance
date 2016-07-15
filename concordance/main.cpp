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
    
    ofstream myfile;
    myfile.open ("english.txt");
    myfile << "Writing this to a file.\n";
    myfile.close();
    
    return 0;
}
