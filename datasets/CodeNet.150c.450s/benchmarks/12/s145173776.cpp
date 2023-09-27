#include<bits/stdc++.h>

using namespace std;
#define rep(i,n) for(int i=0;i<(n);i++)

#define MAX 100005
#define INF INT_MAX

typedef long long ll;
typedef pair<int, int> P;

int main(int, char**)
{
    int n;
    cin >> n;

    vector<ll> a(n+1);
    for (int i = 1; i <= n; i++) cin >> a[i];

    for (int i = 1; i <= n; i++) {
        int pi = i/2;
        int li = i*2;
        int ri = i*2+1;
        cout <<  "node " << i << ": key = " << a[i] << ", ";
        if (pi > 0) cout << "parent key = " << a[pi] << ", ";
        if (li <= n) cout << "left key = " << a[li] << ", ";
        if (ri <= n) cout << "right key = " << a[ri] << ", ";
        cout << endl;
    }
    return 0;
}

