#include <bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;

int cnt[10010];

int main() {
    ios_base::sync_with_stdio(0);
    int n; cin >> n;
    for (int x=1;x<=100;x++) {
        for (int y=1;y<=100;y++) {
            for (int z=1;z<=100;z++) {
                int val = x*x+y*y+z*z+x*y+y*z+x*z;
                if (val<=10000) cnt[val]++;
            }
        }
    }

    for (int i=1;i<=n;i++) cout << cnt[i] << endl;
}
