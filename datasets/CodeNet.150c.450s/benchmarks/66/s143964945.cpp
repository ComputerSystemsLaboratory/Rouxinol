#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
#include<vector>
#define INF 999999
using namespace std;
int main(){
    string reg[300],num;
    int FLG=0,L,LL;
    cin>>L;
    for(int i=0;i<L;i++){
        cin>>reg[i];
    }
    cin>>LL;
    while(LL--){
        int uno=0;
        cin>>num;
        for(int i=0;i<L;i++){
            if(num==reg[i]){
                if(FLG==0){cout<<"Opened by "<<num<<endl;FLG=1;uno=1;break;}
                if(FLG==1){cout<<"Closed by "<<num<<endl;FLG=0;uno=1;break;}
            }
        }
    if(uno==0)cout<<"Unknown "<<num<<endl;
    }
    return 0;
}