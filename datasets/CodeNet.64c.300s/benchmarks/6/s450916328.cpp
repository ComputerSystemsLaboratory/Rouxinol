#include <iostream>
#include <stdio.h>
#include <numeric>
#include <algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    int  m[4][3][10]={};
    for(int i=0;i<n;++i){
        int b,f,r,v;
        cin>>b>>f>>r>>v;
        b=b-1;
        f=f-1;
        r=r-1;
        m[b][f][r]+=v;
    }
    for(int i=0;i<4;++i){
        for(int j=0;j<3;++j){
            for(int k=0;k<10;++k){
                cout<<" "<<m[i][j][k];
            }
            cout<<endl;
        }
        if(i!=3){
            cout<<"####################"<<endl;
        }
    }
    return 0;
}

