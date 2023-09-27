#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,a[4][3][10]={};
    cin>>n;
    for(int i=0;i<n;i++){
        int b,c,d,e;
        cin>>b>>c>>d>>e;
        a[b-1][c-1][d-1]+=e;
    }
    for(int j=0;j<4;j++){
        for(int k=0;k<3;k++){
            for(int l=0;l<10;l++){
                if(a[j][k][l]>0){
                    cout<<" "<<a[j][k][l];
                }
                else{
                    cout<<" "<<0;
                }
            }
            cout<<endl;
        }
        if(j<3){
            cout<<"####################"<<endl;
        }
        
    }
    return 0;
}
