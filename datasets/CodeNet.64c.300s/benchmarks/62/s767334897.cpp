#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    int A[a][b],B[b],C[a];
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            cin>>A[i][j];
        }
    }
    for(int k=0;k<b;k++){
        cin>>B[k];
    }
    for(int p=0;p<a;p++){
        C[p]=0;
    }
    for(int m=0;m<a;m++){
        for(int n=0;n<b;n++){
            C[m]+=A[m][n]*B[n];
        }
    }
    for(int o=0;o<a;o++){
        cout<<C[o]<<endl;
    }
    return 0;
}
