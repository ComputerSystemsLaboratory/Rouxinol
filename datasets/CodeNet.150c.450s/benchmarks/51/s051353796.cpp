#include<iostream>
#include<cstdio>
using namespace std;

int main(){
    int input;
    bool stu[31]={};
    for(int i=0;i<28;i++){
        cin>>input;
        stu[input]=true;
    }
    for(int i=1;i<=30;i++){
        if(!stu[i]) printf("%d\n",i);
    }
    return 0;
}