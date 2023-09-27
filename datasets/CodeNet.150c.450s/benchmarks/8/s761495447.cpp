//
//  main.cpp
//  ITP1-9-C
//
//  Created by h3037153 on 2017/08/28.
//  Copyright ?? 2017??´ h3037153. All rights reserved.
//
#include<iostream>
#include<string>
using namespace std;
int main(){
    int taroPoint = 0, hanakoPoint = 0, n = 0;
    string taroCard[1000], hanakoCard[1000];
    while( cin >> n ){
        for(int i = 0; i < n; i++){
            cin >> taroCard[i] >> hanakoCard[i];
            
            if( taroCard[i] < hanakoCard[i] ){
                hanakoPoint += 3;
            }
            
            if( taroCard[i] > hanakoCard[i] ){
                taroPoint += 3;
            }
            if( taroCard[i] == hanakoCard[i] ){
                taroPoint++;
                hanakoPoint++;
            }
            
        }
        cout << taroPoint <<" "<< hanakoPoint << endl;
        hanakoPoint = 0;
        taroPoint = 0;
    }
    return 0;
}
//a b c d e f g h i j k l m n o p q r s t u v w x y z