#include <iostream>
#include <vector>
using namespace std;
typedef long long ll;

ll m[101][101];
vector<ll> p;

int main() {

    int n;
    cin >> n;
    ll a, b;
    for (int i = 0; i < n; i++) {
        cin >> a >> b;
        if (i == 0) 
            p.push_back(a);
        p.push_back(b);
    }

    for (int i = 0; i < n; i++) 
        m[i][i] = 0;
    // l: length
    for (int l = 1; l < n; l++) {
        for (int i = 0; i < n - l; i++) {
            int j = i + l;
            m[i][j] = (1 << 21);
            for (int k = i; k < j; k++) {
                ll q = m[i][k] + m[k+1][j] + p[i] * p[k+1] * p[j+1];
                
                if( q < m[i][j] )
                    m[i][j] = q;
            }
        }
    }

    cout << m[0][n-1] << '\n';
}


