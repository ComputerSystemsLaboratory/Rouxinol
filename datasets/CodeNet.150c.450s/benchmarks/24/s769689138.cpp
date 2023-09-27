#include <bits/stdc++.h>

#define rep(i, n) for(int i = 0; i < n; i++)

typedef long long ll;
using namespace std;
int mod = 1000000007;

int main(void){
    while(true){
        priority_queue<pair<int, int>> pq;
        int N, M; cin >> N >> M;
        if(N == 0) break;
        int ans = 0;
        rep(i, N){
            int d, p; cin >> d >> p;
            pq.push(make_pair(p, d));
        }
        while(!pq.empty()){
            pair<int, int> op = pq.top();
            pq.pop();
            if(M == 0){
                ans += op.first*op.second;
            }
            else if(M < op.second){
                ans += (op.second - M)*op.first;
                M = 0;
            }
            else M -= op.second;
        }
        cout << ans << endl;
    }
    return 0;
}
