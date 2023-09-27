//
//  main.cpp
//  ITP1_9-C
//
//  Created by Saicj on 2015/08/04.
//  Copyright (c) 2015??´ saicj. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {

    int count;
    
    int resultA = 0;
    int resultB = 0;
    
    cin >> count;
    
    for (int i = 0; i < count; i++ ) {
        
        string a;
        string b;
        
        cin >> a >> b;
        
        if (a > b) {
            
            resultA += 3;
            
        }else if (a < b){
            
            resultB += 3;
            
        }else if (a == b){
            
            resultA++;
            resultB++;
        }
            
    }
    
    cout << resultA << " " << resultB << endl;
    
    return 0;
}