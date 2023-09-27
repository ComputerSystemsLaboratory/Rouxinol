// #define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(v) v.begin(), v.end()
#define Graph vector<vector<int>>
typedef long long ll;
typedef pair<int, int> P;
const int INF = 1000000007;

int main(){
    int N;
    cin >> N;
    vector<int> H(N+1, 0);
    for(int i = 1; i<= N; i++)  cin >> H[i];
    for(int i = 1; i<= N; i++){
        cout << "node " << i << ": ";
        cout << "key = " << H[i] << ", ";
        if(i / 2 > 0) cout << "parent key = " << H[i / 2] << ", ";
        if(2 * i <= N) cout << "left key = " << H[i * 2] << ", ";
        if(2 * i + 1 <= N) cout << "right key = " << H[i * 2 + 1] << ", ";
        cout << endl;
    }
}
