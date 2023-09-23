#include<iostream>
#include<stdio.h>
#include<math.h>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int a,b;
    while(cin>>a>>b){
        int c=a+b;
        int co=1;
        while(c/10){
            co++;
            c/=10;
        }
        cout<<co<<endl;
    }
}