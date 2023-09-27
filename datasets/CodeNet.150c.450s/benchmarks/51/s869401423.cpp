#include<bits/stdc++.h>
using namespace std ;
bool su[100000];
int main (){
    for(int i=0;i<28;i++){
        int g;
        cin>>g;
        su[g]=1;
    }
    for(int i=1;i<31;i++){
        if(su[i]==0){
            cout<<i<<endl;
        }
    }

}