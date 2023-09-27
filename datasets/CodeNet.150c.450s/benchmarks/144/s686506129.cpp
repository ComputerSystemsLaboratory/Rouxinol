#include <iostream>
using namespace std;

int main() {
    long a[101][101], b[101][101], c[101][101], n, m, l, i, j, k;

    cin >> n >> m >> l;
    for(i=1;i<=n;i++){
        for(j=1;j<=m;j++){
            cin >> a[i][j];
        }
    }

    for(i=1;i<=m;i++){
        for(j=1;j<=l;j++){
            cin >> b[i][j];
        }
    }

    for(i=1;i<=n;i++){
        for(j=1;j<=l;j++){
            c[i][j]=0;
            for(k=1;k<=m;k++){
                c[i][j]= c[i][j] + a[i][k]*b[k][j];
            }
        }
    }

    for(i=1;i<=n;i++){
        cout << c[i][1];
        for(j=2;j<=l;j++){
            cout << " " << c[i][j];
        }
        cout << endl;
    }

    return 0;
}
