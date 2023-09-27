#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;
int M,S,cou=0;
int func(int n,int m,int s){
    if(n==10){
        if(m==M&&s==S){
            cou++;
        }
        return cou;
    }
        func(n+1,m,s);
        func(n+1,m+1,s+n);
        return cou;
}
int main(){
    for(;;){
    cou=0;
    cin>>M>>S;
    if(M==0&&S==0)break;
    cou=func(0,0,0);
    cout<<cou<<endl;
    }
}