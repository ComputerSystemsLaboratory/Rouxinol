//
//  main.cpp
//  ListOfHeights
//
//  Created by James Hosken on 28/09/2014.
//  Copyright (c) 2014 James Hosken. All rights reserved.
//

#include <iostream>
#include <stdlib.h>
#include <algorithm>
using namespace std;

int main(int argc, const char * argv[])
{
    
    string input_line;
    
    int *heights;
    heights = new int[0];
    int lineNum = 0;
    
    
    while(cin)
    {
        getline(cin, input_line);
        lineNum++;
        
        //Chunk of array expansion code
        int line = atoi(input_line.c_str());
        int* temp = new int[lineNum];
        copy(heights, heights + lineNum-1, temp);
        delete [] heights;
        temp[lineNum-1] = line;
        heights = temp;
        
    }
    

    sort(heights, heights + lineNum);
    
    for(int i = lineNum-1; i >= lineNum-3; i--)
    {
        cout << heights[i] << endl;
    }

    
}