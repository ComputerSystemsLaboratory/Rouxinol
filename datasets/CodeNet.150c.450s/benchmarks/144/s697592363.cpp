#include <iostream>
int main(){
    using namespace std;
    long long int n,m,l,i,j,k;
    long long x;
    cin >> n >> m >> l;
    long long a[n][m];
    long long b[m][l];
    long long c[n][l];
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            cin >> x;
            a[i][j] = x;
        }
    }
    for(i=0;i<m;i++){
        for(j=0;j<l;j++){
            cin >> x;
            b[i][j] = x;
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<l;j++){
            x = 0;
            for(k=0;k<m;k++){
                x += a[i][k]*b[k][j];
            }
            cout << x;
            if(j<l-1){
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}