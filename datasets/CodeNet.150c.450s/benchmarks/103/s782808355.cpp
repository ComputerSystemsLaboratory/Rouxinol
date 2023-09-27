#include<iostream>
#include<algorithm>
#include<cstdio>
using namespace std;
int cnt=0;
int N,S;
void func(int m,int n,int s){
    if(m==10){
        if(n==N&&s==S)cnt++;

        return;
    }

    func(m+1,n+1,s+m);
    func(m+1,n,s);

    return;
}
int main(){
    while(cin>>N>>S,N||S){
        cnt=0;
        func(0,0,0);
        cout<<cnt<<endl;
    }
}