#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    while(1){
        cin>>n>>m;
        if(n==0 && m==0){break;}
        int t[101],h[101];
        int sumt=0,sumh=0,co=0;
        for(int i=0;i<n;i++){
            cin>>t[i];
            sumt+=t[i];
        }
        for(int j=0;j<m;j++){
            cin>>h[j];
            sumh+=h[j];
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if((sumt-t[i]+h[j])==(sumh-h[j]+t[i])){
                    cout<<t[i]<<" "<<h[j]<<endl;
                    co=1;
                    break;
                }
            }
            if(co==1){
                break;
            }
        }
        if(co==0){
            cout<<-1<<endl;
        }
    }
    return 0;
}


