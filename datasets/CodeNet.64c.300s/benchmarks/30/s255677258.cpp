#include<iostream>
#include<cstdio>
using namespace std;

int main(){
    int N;
    while(cin>>N,N){
        int money[6]={500,100,50,10,5,1},ans=0;
        N=1000-N;
        for(int i=0;i<6;i++){
            while(N-money[i]>=0) N-=money[i],ans++;
        }
        printf("%d\n",ans);
    }
    return 0;
}