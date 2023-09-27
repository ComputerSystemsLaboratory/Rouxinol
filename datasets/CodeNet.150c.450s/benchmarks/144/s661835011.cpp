#include <iostream>
using namespace std;

int main(){
    int n,m,l;
    long long x[100][100],y[100][100],z[100][100];
    cin>>n>>m>>l;
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
    for(int i=0;i<n;i++){
        for(int j=0;j<l;j++){
            z[i][j]=0;
            for(int k=0;k<m;k++){
                z[i][j]+=x[i][k]*y[k][j];
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<l;j++){
            if(j)cout << " ";
            cout<<z[i][j];
        }
        cout<<endl;
    }
    return 0;
}
