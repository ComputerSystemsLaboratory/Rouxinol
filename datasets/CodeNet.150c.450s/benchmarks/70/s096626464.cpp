#include<cstdio>
#include<cmath>
#include<iostream>
#include<algorithm>
#define PI 3.1415926535897932384626433
using namespace std;
int main(){
    int days[13]={0,31,29,31,30,31,30,31,31,30,31,30,31};
    int rui[13]={0};
    for(int i=1;i<=12;i++)rui[i]=rui[i-1]+days[i];
    while(1){
        int a,b;
        cin>>a>>b;
        if(a==0&&b==0)break;
        int p=rui[a-1]+b;
        if(p%7==0)cout<<"Wednesday"<<endl;
        if(p%7==1)cout<<"Thursday"<<endl;
        if(p%7==2)cout<<"Friday"<<endl;
        if(p%7==3)cout<<"Saturday"<<endl;
        if(p%7==4)cout<<"Sunday"<<endl;
        if(p%7==5)cout<<"Monday"<<endl;
        if(p%7==6)cout<<"Tuesday"<<endl;
    }
    return 0;
}