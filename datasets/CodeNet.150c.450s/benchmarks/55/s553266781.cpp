#include<stdio.h>
#include<iostream>
#include<string>
#include<cmath>

using namespace std;

int main(void){
    long long int tmp,ans,i;
    string x;
    while(1){
        ans=0;
        getline(cin,x);
        if(x[0]=='0') break;
        for(i=0;i<x.size();i++){
            ans+=x[i]-'0';
        }
        cout << ans << endl;

    }
    return 0;
}