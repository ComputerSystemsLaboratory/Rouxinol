#include<iostream>
using namespace std;
int coin[6]={500,100,50,10,5,1};
int main(){
    int n;
    while(cin>>n,n){
        n=1000-n;
        int cnt=0,i=0;
        while(1){
            if(n-coin[i]>=0){
                n-=coin[i];
                cnt++;
            }
            else i++;
            if(i>=6)break;
        }
        cout<<cnt<<endl;
    }
    return 0;
}