#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int main(){
    int n;
    while(cin>>n){
        bool prime[1000000]={false};
        prime[1]=true;
        prime[2]=false;
        int cou=0;
        for(int i=2;i*i<=n;i++){
            if(!prime[i]){
                for(int j=2;i*j<=n;j++){
                    prime[i*j]=true;
                }
            }
        }
        for(int i=1;i<=n;i++){
            if(!prime[i])cou++;
        }
        cout<<cou<<endl;
    }
}