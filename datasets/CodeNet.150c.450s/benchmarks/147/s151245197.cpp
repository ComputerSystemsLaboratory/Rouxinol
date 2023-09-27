#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define MOD 1000000007
#define MAX 1000000007
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define ub upper_bound
#define lb lower_bound
#define zoom ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define precise cout.precision(8); cout << fixed;
#define seed srand(chrono::steady_clock::now().time_since_epoch().count());
const double PI = acos(-1);
using namespace std;

int main() {


    zoom;    
    int N, i, j, k; cin >> N;
    vector<int> ans(N + 1, 0);
    for(i = 1; i <= 100; i += 1) {
        for(j = 1; j <= 100; j += 1) {
            for(k = 1; k <= 100; k += 1) {
                int res = (i * i) + (j * j) + (k * k) + (i * j) + (j * k) + (k * i);
                if(res > N)
                    break;
                ans[res] += 1;
            }
        }
    }
    for(i = 1; i <= N; i += 1) {
        cout << ans[i] << endl;
    }
    return 0;
}