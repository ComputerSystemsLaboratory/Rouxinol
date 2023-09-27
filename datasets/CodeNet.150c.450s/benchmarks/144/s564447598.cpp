#include<iostream>
using namespace std;
int main(){
    int r,c,t;
    long long k=0;
    cin>>r>>c>>t;
    long long R[100][100]={};
    long long SA[100][100]={};
    for (int i=0;i<r;i++){
        for(int x=0;x<c;x++){
            cin>>R[i][x];
        }
    }
    for (int i=0;i<c;i++){
        for(int x=0;x<t;x++){
            cin>>SA[i][x];
        }
    }
    for(int s=0;s<r;s++){
        for (int i=0;i<t;i++){
            for(int x=0;x<c;x++){
                k+=R[s][x]*SA[x][i];
            }
            if (i==t-1) cout<<k;
            else cout<<k<<" ";
            k=0;
        }
        cout<<endl;
    }
}

