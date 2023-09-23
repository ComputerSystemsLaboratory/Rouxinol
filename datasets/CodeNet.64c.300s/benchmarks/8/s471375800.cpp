//============================================================================
// Name        : (^o^).cpp
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
    int i,n,x;
    cin>>n;
    i=1;
    while(1){while(1){
    x=i;
    if(x%3==0){
    	cout<<" "<<i;
    	break;
    }while(1){
    if(x%10==3){
    	cout<<" "<<i;
    	break;
    }
    x/=10;
    if(x==0){
    	break;
    }}break;}
    if(++i>n){
    	break;
    }}
    cout<<endl;
	return 0;
}

