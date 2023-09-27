/*
author:lingling
date:2017.06.02
description: ??°??????????????????????¢?????????§??¬?????°
*/
#include<iostream>
using namespace std;
int mygcd(int,int);
int main() {
    int x,y;
    while(cin>>x>>y) {
        int a=max(x,y);
        int b=min(x,y);
        cout<<mygcd(a,b)<<endl;
    }
    return 0;
}
int mygcd(int x, int y) {
    if(x>=y) {
         if(y==0) return x; 
         else return mygcd(y,x%y);
    }
}