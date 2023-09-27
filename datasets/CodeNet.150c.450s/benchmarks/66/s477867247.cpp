#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m,k=0,h=0;
    string u[256];
    string t[256];

    cin>>n;

    for(int i=0;i<n;i++){
        cin>>u[i];
    }   

    cin>>m;

    for(int i=0;i<m;i++){
        cin>>t[i];
    }   
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(t[i]==u[j]){
                if(k==0){
                    cout<<"Opened by "<<t[i]<<endl;
                    k=1;
                    h++;
                }
                else if(k==1){
                    cout<<"Closed by "<<t[i]<<endl;
                    k=0;
                    h++;
                }       
            }       
        }
        if(h==0){
            cout<<"Unknown "<<t[i]<<endl;
        }
        h=0;
    }
}

