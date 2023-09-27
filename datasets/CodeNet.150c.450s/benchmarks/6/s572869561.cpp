#include<stdio.h>
#include<iostream>
using namespace std;

int main(){
    int a,b,c;
    
    scanf("%d %d %d",&a,&b,&c);
    
    c=c-b;
    b=b-a;
    
    if(c>0 && b>0)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
}
