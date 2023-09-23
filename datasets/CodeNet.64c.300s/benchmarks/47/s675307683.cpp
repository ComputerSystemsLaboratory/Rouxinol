#include<cstdio>
#include<cmath>
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int num[1000]={0};
    int a;
    while(cin>>a)num[a]++;
    int flg=0;
    for(int i=100;;i--){
        for(int j=0;j<200;j++){
            if(num[j]==i){
                flg=1;
                cout<<j<<endl;
            }
        }
        if(flg)break;
    }
    return 0;
}