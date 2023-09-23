#include <iostream>
using namespace std;

int main(){
    int r,c,b;
    int a=0;
    cin>>r>>c;
    
    int x[r+1][c+1];
    int y[r+1];
    int z[c+1];
    
    for (int i=1;i<=r;i++){
        y[i]=0;
    }
    for (int i=1;i<=c;i++){
        z[i]=0;
    }
    for (int i=1;i<=r;i++){
        for (int j=1;j<=c;j++){
            cin>>b;
            x[i][j]=b;
            a += x[i][j];
        }
    }
    for (int i=1;i<=r;i++){
        for (int j=1;j<=c;j++){
            y[i] += x[i][j];
        }
    }
    for (int i=1;i<=c;i++){
        for (int j=1;j<=r;j++){
            z[i] += x[j][i];   
        }
    }
    for (int i=1;i<=r;i++){
        for (int j=1;j<=c;j++){
            cout << x[i][j]<<" ";
        }cout<<y[i]<<endl;
    }
    
    for (int i=1;i<=c;i++){
        cout<<z[i]<<" ";
    }
    cout<<a<<endl;
    return 0;
}
