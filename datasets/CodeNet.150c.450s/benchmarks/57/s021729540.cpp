//
//  main.cpp
//  sample
//
//  Created by h3037178 on 2017/07/27.
//  Copyright ?? 2017??´ ?????£?????????. All rights reserved.
//

#include<iostream>
using namespace std;
int main(){
    int i,s;
    char op;
    for(;;){
        cin>>i>>op>>s;
    if(op=='+'){
        cout<<i+s;
    }
    if(op=='-'){
        cout<<i-s;
    }
    if(op=='*'){
        cout<<i*s;
    }
    if(op=='/'){
        cout<<i/s;
    }
    if(op=='?'){
        break;
    }
        cout<<endl;
    }
}