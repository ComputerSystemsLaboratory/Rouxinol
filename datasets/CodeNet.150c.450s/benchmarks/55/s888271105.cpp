//
//  main.cpp
//  ITP1-8-B
//
//  Created by h3037153 on 2017/08/22.
//  Copyright ?? 2017??´ h3037153. All rights reserved.
//
#include<iostream>
#include<string>
#include<cstdio>
using namespace std;
int main(){
    int i=0,num=0,x=0,ii;
    char number[1000]={};
       while(1){
           scanf("%c",&number[i]);
           if(number[0]=='0'){
               break;
           }
           if(number[i]==0x30){
                x=0;
                num+=x;
               }
           if(number[i]==0x31){
               x=1;
               num+=x;
           }
           if(number[i]==0x32){
               x=2;
               num+=x;
           }
           if(number[i]==0x33){
               x=3;
               num+=x;
           }
           if(number[i]==0x34){
               x=4;
               num+=x;
           }
           if(number[i]==0x35){
               x=5;
               num+=x;
           }
           if(number[i]==0x36){
               x=6;
               num+=x;
           }
           if(number[i]==0x37){
               x=7;
               num+=x;
           }
           if(number[i]==0x38){
               x=8;
               num+=x;
           }
           if(number[i]==0x39){
               x=9;
               num+=x;
           }
           if(number[i]=='\n'){
            cout<<num<<endl;
               number[i]={};
               i=0;
               num=0;
               i--;
           }
           ++i;
    }
    //char n=0x30;0
    //char n1=0x31;1
    
    //cout<<n1<<endl;
    
    return 0;
}