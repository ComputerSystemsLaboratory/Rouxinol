//
//  main.cpp
//  ITP1-9-B
//
//  Created by h3037153 on 2017/08/28.
//  Copyright ?? 2017??´ h3037153. All rights reserved.
//
#include<iostream>
#include<string>
using namespace std;
int main(){
    string card;
    string cardBefore,cardBehind;
    int h[100] = {},m = 0, len = 0;
    while( cin >> card >> m){
        if( card == "-" ) break;
        len = card.length();
        for( int i = 0; i < m; i++ ){
            cin >> h[i];
            cardBefore = card.substr(0,h[i]);
            cardBehind = card.substr(h[i],len);
            card = cardBehind + cardBefore ;
        }
        cout<<card<<endl;
    }
    return 0;
}