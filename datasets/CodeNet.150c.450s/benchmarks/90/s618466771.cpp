//
//  main.cpp
//  kazane
//
//  Created by h3036136 on 2017/07/27.
//  Copyright ?? 2017??´ h3036136. All rights reserved.
//1=31,2=29,3=31,4=30,5=31,6=30,7=31,8=31,9=30,10=31,11=30,12=31

#include <iostream>
#include <string>
using namespace std;
int main(){
    int a[101]={0},b,i,saihin[100]={0},c=0,saidai=0;
    while(cin>>b){
        a[b]=a[b]+1;
    }
    for(i=1;i<=100;i++){
        if(saidai<a[i]){
            saidai=a[i];
        }
    }
    for(i=1;i<=100;i++){
        if(a[i]==saidai){
            saihin[c]=i;
            c=c+1;
        }
    }
    for(i=0;i<100;i++){
        if(saihin[i]==0)break;
        cout<<saihin[i]<<endl;
    }
    return 0;
}