#include<cstdio>
#include<iostream>
#include<queue>
#include<stack>
#define MAX_N 100000000

using namespace std;

    struct A{
        int score[5];
        int ans;
    } A;

    struct B{
        int score[5];
        int ans;
    } B;
int main(){
    
    A.ans=0;
    B.ans=0;

    for(int i=0;i<4;++i){
        cin>>A.score[i];
        A.ans+=A.score[i];
    }

    for(int i=0;i<4;++i){
        cin>>B.score[i];
        B.ans+=B.score[i];
    }

    A.ans>=B.ans ? cout<<A.ans<<endl : cout<<B.ans<<endl;

    return 0;
}