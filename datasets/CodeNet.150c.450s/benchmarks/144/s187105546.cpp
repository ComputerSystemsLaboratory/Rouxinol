#include <iostream>
using namespace std;

int main(void)
{
    int n, m, l;
    long long a[100][100], b[100][100], c[100][100] = {{}};
    
    cin >> n >> m >> l;
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < m; ++j)
            cin >> a[i][j];
    for (int j = 0; j < m; ++j)
        for (int k = 0; k < l; ++k)
            cin >> b[j][k];
            
    for (int i = 0; i < n; ++i) {
        for (int k = 0; k < l; ++k) {
            for (int j = 0; j < m; ++j) {
                c[i][k] += a[i][j] * b[j][k];
            }
            cout << ((k == 0)? "" : " ")<< c[i][k];
        }
        cout << endl;
    }
    
    return 0;
}
