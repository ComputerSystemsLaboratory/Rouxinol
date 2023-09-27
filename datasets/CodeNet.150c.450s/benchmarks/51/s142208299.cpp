#include<iostream>
#include<string>
#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
int main(void){

    int a[31]={0};
    int b;
    for(int i=1;i<=28;i++){
        cin>>b;
        a[b]=1;
    }
    for(int i=1;i<=30;i++){
        if(a[i]==0)cout<<i<<endl;
    }


	return 0;
}