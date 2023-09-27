//
//  main.cpp
//  AOJ_V0_0001
//
//  Created by anzai on 2015/08/06.
//  Copyright (c) 2015??´ anzai. All rights reserved.
//

#include<iostream>
using namespace std;

int main(){
    
    int array[10] = {0};
    
    for (int i = 0; i < 10; i++) {
        cin >> array[i];
        
    }
    int first = 0;
    int second = 0;
    int third = 0;
    for (int i = 0; i < 10; i++) {
        if (first <= array[i]) {
            third = second;
            second = first;
            first = array[i];
        }
        else if (second <= array[i]){
            third = second;
            second = array[i];
        }
        else if (third <= array[i]){
            third = array[i];
        }
    }
    cout << first << endl;
    cout << second << endl;
    cout << third << endl;
    
    return 0;
}