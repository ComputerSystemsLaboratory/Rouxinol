#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;

int main(){
    int student[50]={0},cut=0;
    int n;
    for(int i=1;i<29;i++){
        cin >>n;
        student[n]=1;
    }
    for(int i=1;i<31;i++){
        if(student[i]!=1)cout <<i<<endl;
    }
    return 0;
}