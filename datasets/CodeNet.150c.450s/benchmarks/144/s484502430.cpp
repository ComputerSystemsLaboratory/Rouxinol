#include <iostream>

using namespace std;

int main()
{
    int n,m,l;
    cin >> n >> m >> l;
    int a[n][m],b[m][l];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> a[i][j];
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<l;j++){
            cin >> b[i][j];
        }
    }
    long long r[n][l];
    for(int i=0;i<n;i++){
        for(int j=0;j<l;j++){
            r[i][j]=0;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<l;j++){
            for(int k=0;k<m;k++){
                r[i][j]+=a[i][k]*b[k][j];
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<l-1;j++){
            cout << r[i][j] << " ";
        }
        cout << r[i][l-1] << endl;
    }
    return 0;
}

