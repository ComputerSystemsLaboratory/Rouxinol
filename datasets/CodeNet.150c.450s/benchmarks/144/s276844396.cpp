#include<iostream>
using namespace std;
int main() {
    int n, m, l;
    int x[100][100];
    int y[100][100];
    long long z[100][100];
    cin >> n >> m >> l;
    for (int prime1 = 0; prime1 < n; prime1++) {
        for (int prime2 = 0; prime2 < m; prime2++) {
            cin >> x[prime1][prime2];
        }
    }
    for (int prime2 = 0; prime2 < m; prime2++) {
        for (int prime3 = 0; prime3 < l; prime3++) {
            cin >> y[prime2][prime3];
        }
    }
    for (int prime1 = 0; prime1 < n; prime1++) {
        for (int prime3 = 0; prime3 < l; prime3++) {
            z[prime1][prime3] = 0;
            for (int prime2 = 0; prime2 < m; prime2++) {
                z[prime1][prime3] += x[prime1][prime2] * y[prime2][prime3];
            }
        }
    }
    for (int prime1 = 0; prime1 < n; prime1++) {
        for (int prime3 = 0; prime3 < l; prime3++) {
            if(prime3<l-1){
                cout << z[prime1][prime3] << " ";
            }else{
                cout << z[prime1][prime3];
            }
        }
        cout << endl;
    }
    return 0;
}