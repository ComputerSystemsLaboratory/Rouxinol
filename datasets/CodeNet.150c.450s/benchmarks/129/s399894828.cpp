#include<iostream>
using namespace std;
int main() {
    int r,c,i,ii,iii,g[200][200]={};
    cin>>r>>c;
    for(i=1;i<=r;i++){
        for(ii=1;ii<=c;ii++){
            cin>>g[i][ii];
        }
    }
    for(i=1;i<=r;i++){
        for(ii=1;ii<=c;ii++){
            g[i][c+1]+=g[i][ii];
        }
    }
    for(i=1;i<=r;i++){
        for(ii=1;ii<=c;ii++){
            g[r+1][ii]+=g[i][ii];
        }
    }
    for(ii=1;ii<=c;ii++){
        g[r+1][c+1]+=g[r+1][ii];
    }
    for(i=1;i<=r+1;i++){
        for(ii=1;ii<=c+1;ii++){
            cout<<g[i][ii];
            if(c+1==ii){
                cout<<endl;
            }
            else{
                cout<<" ";
            }
        }
    }
    
    return 0;
}