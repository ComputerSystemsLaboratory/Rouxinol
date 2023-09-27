#include<cstdio>
#include<iostream>
#include<algorithm>
#define cou cnt
using namespace std;

int N,num[100],ans;
long long memo[100][21];

long long func(int n,int s){
    long long cou=0;

    if(s<0||s>20)return 0;
    if(memo[n][s]!=-1)return memo[n][s];
    if(n==N-1){
        if(s==ans)return 1;
        return 0;
    }
    cou += func(n+1,s+num[n]);
    if(n!=0){
        cou += func(n+1,s-num[n]);
    }
    memo[n][s]=cou;
    return cou;
}
int main(){
    cin>>N;

    for(int i=0;i<N;i++){
        for(int j=0;j<=20;j++){
            memo[i][j]=-1;
        }
    }

    for(int i=0;i<N-1;i++){
        cin>>num[i];
    }
    cin>>ans;
    cout<<func(0,0)<<endl;
}