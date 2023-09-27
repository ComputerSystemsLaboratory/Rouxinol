#include<bits/stdc++.h>
using namespace std;
int main(void){
    while(1){
        int money,change,num=0;
        cin>>money;
        if(money==0){
            break;
        }
        change=1000-money;
        num+=(change/500);
        change%=500;
        num+=(change/100);
        change%=100;
        num+=(change/50);
        change%=50;
        num+=(change/10);
        change%=10;
        num+=(change/5);
        change%=5;
        num+=change;
        cout<<num<<endl;
    }
    return 0;
}
