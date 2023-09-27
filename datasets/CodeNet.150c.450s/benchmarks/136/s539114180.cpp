#include<iostream>
#include<stdio.h>
#include<math.h>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int x,y,p,q;
    while(cin>>x>>y){
    if(x>y)
        swap(x, y);
    p=x,q=y;
    while(1){
        if(x==0){
            cout<<y<<" ";
            break;
        }
        int t=x;
        x=y%x;
        y=t;
    }
    cout<<p*(q/y)<<endl;
    }
}