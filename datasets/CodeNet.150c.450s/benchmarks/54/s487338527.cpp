//
//  main.cpp
//  ITP1-9-A
//
//  Created by h3037153 on 2017/08/28.
//  Copyright ?? 2017??´ h3037153. All rights reserved.
//
#include<iostream>
#include<string>
#include<cctype>
using namespace std;
int main(){
    string W,T[1000];
    int i=0,counter=0,ii=0,len;
    char ch ={};
    cin>>W;
    while(cin>>T[i]){
        if(T[i] == "END_OF_TEXT"){
            break;
        }
        len = T[i].length();
        for(ii=0;ii<len;ii++){
            if(isupper(T[i][ii])){
                ch = tolower(T[i][ii]);
                T[i][ii] = ch;
            }
        }
        if(T[i] == W){
            counter++;
        }
        else i++;
    }
    cout<<counter<<endl;
    return 0;
}