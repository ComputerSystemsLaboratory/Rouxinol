//
//  main.cpp
//  ITP1_5-D
//
//  Created by ?????¶??? on 15/8/14.
//  Copyright (c) 2015??´ ?????¶???. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;

int main(int argc, const char * argv[]) {

    int num;
    
    cin >> num;
    
    for (int i = 1; i <= num; i++) {
        
        if (i % 3 == 0) {
            cout << " " << i;
            continue;
            
        }else if (i % 10 == 3){
            cout << " " << i;
            continue;
        }
        
        int temp = i / 10;
        while (temp){
            
            if (temp % 10 == 3) {
                cout << " " << i;
                break;
            }
            
            temp /= 10;
        }
    }
    
    cout << endl;
    
    
    return 0;
}