#include <bits/stdc++.h>
 
#define loop(n, i) for(int i=0;i<n;i++)
#define all(v) v.begin(),v.end()
#define HERE cout << "HERE: " << __LINE__ << endl;
#define INSP(v) cout << v << " at " << __LINE__ << endl;

using namespace std;
typedef long long ll;

int main()
{
    int m, min, max;
    while (cin >> m >> min >> max && m) {
        vector<int> v;
        loop(m, i) {
            int j; cin >> j;
            v.push_back(j);
        }

        int gap = 0;
        int ans = 0;
        for (int i = min; i <= max; i++) {
            if (gap <= v[i-1] - v[i]) {
                gap = v[i-1] - v[i];
                ans = i;
            }
        }
        cout << ans << endl;
    }
}