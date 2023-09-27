#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int sum[101],n,mx,cou;
int main(){
    while(cin>>n){
        sum[n]++;
    }
    for(int i=0;i<100;i++)mx=max(mx,sum[i]);
    for(int i=0;i<100;i++){
        if(mx==sum[i]){
            cout<<i<<endl;
    }
    }
return 0;
}