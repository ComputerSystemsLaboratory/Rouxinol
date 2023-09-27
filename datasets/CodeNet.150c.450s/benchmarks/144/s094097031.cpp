#include<bits/stdc++.h>
using namespace std;
int main(){

    int n,m,l;
    cin>>n>>m>>l;

    long long x[n][m];
    long long y[m][l];
    long long z[n][l];


    for(int i=0;i<n;i++){
        for(int j=0;j<l;j++){
            z[i][j]=0;
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>x[i][j];
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<l;j++){
            cin>>y[i][j];
        }
    }  
    
    for(int k=0;k<n;k++){
        for(int h=0;h<l;h++){
            for(int j=0;j<m;j++){
                z[k][h]+=x[k][j]*y[j][h];
            }
        }
        
    }  
    for(int i=0;i<n;i++){
        for(int j=0;j<l;j++){
            if(j) cout<<" ";
            cout<<z[i][j];
        }
        cout<<endl;
    } 


}
