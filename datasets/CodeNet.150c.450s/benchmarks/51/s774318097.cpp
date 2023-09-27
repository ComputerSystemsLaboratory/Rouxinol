#include<iostream>
#include<cstdio>
using namespace std;

int main(){
    bool die[31] = {};
    int N;
    for(int i=0;i<28;i++){
        cin>>N; die[N] = true;
    }
    for(int i=1;i<=30;i++){
        if(!die[i]) printf("%d\n",i);
    }
    return 0;
}