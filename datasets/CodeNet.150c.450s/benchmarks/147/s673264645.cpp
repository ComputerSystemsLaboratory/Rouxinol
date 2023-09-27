#include<bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define All(V) V.begin(), V.end()
typedef long long int ll;
typedef pair<int, int> P;
const ll MOD = 1e9+7, INF = 1e9;

//しっかり制約確認したか?
int main()
{
    int n; cin >> n;
    map<ll, int> m;
    for(int i = 1; i <= 110; i++){
        for(int j = 1; j <= 110; j++){
            for(int k = 1; k <= 110; k++){
                ll t = (i*i)+(j*j)+(k*k)+(i*j)+(j*k)+(k*i);
                m[t]++;
            }
        }
    }
    for(int i = 1; i <= n; i++){
        cout << m[i] << endl;
    }
    system("pause");
}
