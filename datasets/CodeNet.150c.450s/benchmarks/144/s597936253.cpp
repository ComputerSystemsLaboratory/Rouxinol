#include<iostream>
using namespace std;
int main(){
    int n,m,l;
    cin>>n>>m>>l;
    int x[100][100]={{}};
    int y[100][100]={{}};
    long long int z[100][100]={{}};
    
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>x[i][j];
        }
    }
    for(int j=0;j<m;j++){
        for(int k=0;k<l;k++){
            cin>>y[j][k];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<l;j++){
            for(int k=0;k<m;k++){
                z[i][j]+=x[i][k]*y[k][j];
                }
            cout<<z[i][j];
            if(j==l-1){
                cout<<endl;
            }
            else{
                cout<<" ";
            }
                
            
            
        }
    }
    return 0;
}
