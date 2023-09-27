#include <iostream>
using namespace std;

int main() {
    long n,m,l;
    cin >> n >> m >> l;
    long a[n][m];
    long b[m][l];
    long c[n][l];
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            cin >> a[i][j];
    for(int i=0;i<m;i++)
        for(int j=0;j<l;j++)
            cin >> b[i][j];
    for(int i=0;i<n;i++)
        for(int j=0;j<l;j++){
            c[i][j]=0;
            for(int k=0;k<m;k++)
                c[i][j]=c[i][j]+(a[i][k]*b[k][j]);
        }
    for(int i=0;i<n;i++){
        for(int j=0;j<l;j++)
            cout << c[i][j] << (j==l-1?"":" ");
        cout << endl;
    }
    return 0;
}
