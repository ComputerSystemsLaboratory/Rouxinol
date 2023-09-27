#include <iostream>
using namespace std;

int main(){
    int n,m,c,x;
    cin >>n >>m;
    int a[n+1][m+1];
    int b[m+1];
    
    for (int i=1;i<=n;i++){
        for (int j=1; j<=m;j++){
            cin >>x;
            a[i][j]=x;
        }
    }
    for(int i=1;i<=m;i++){
        cin>>x;
        b[i]=x;
    }
    for(int i=1;i<=n;i++){
        c=0;
        for(int j = 1;j<=m;j++){
            c += a[i][j]*b[j];
        }
        cout << c <<endl;
    }return 0;
}
