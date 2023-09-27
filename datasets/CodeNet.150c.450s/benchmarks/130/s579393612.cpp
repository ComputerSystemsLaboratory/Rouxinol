#include<iostream>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    int a[n][m];
    int b[m];
    int c[n];
    
    for(int i=0;i<n;i++){
        c[i]=0;
    }

    for(int h=0;h<n;h++){
        for(int w=0;w<m;w++){
            cin>>a[h][w];
        }
    }
    for(int i=0;i<m;i++){
        cin>>b[i];   
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            c[i]+= (a[i][j]*b[j]);
        }
    }

    for(int i=0;i<n;i++){
        cout<<c[i]<<endl;
    }
    return 0;
}
