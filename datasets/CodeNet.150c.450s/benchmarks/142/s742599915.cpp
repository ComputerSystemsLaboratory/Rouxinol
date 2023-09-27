#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int(i) = 0; (i) < (n); (i)++)
typedef long long ll;



int main()
{
    ll N, K;
    cin >> N >> K;
    vector<ll> V;
    for (int i=0;i<N;++i)
    {
        ll temp;
        cin >> temp;
        V.push_back(temp);
    }
    for (int i=K;i<N;++i)
    {
        if (V[i-K]<V[i]) {
            cout << "Yes" << endl;

        }
        else {
            cout << "No" << endl;
        }
    }
}
