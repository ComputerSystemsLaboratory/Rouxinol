#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<int, int>;
const ll MOD = 1000000007;

int h[1502], w[1502];

int main(){

    while(true){
        int N, M;
        cin >> N >> M;
        if(N == 0) break;

        for(int i=0;i<N;i++){
            cin >> h[i];
        }
        for(int i=0;i<M;i++){
            cin >> w[i];
        }

        map<int, int> h_count;
        for(int i=0;i<N;i++){
            int h_sum = 0;
            for(int j=i;j<N;j++){
                h_sum += h[j];
                h_count[h_sum]++;
            }
        }

        int ans = 0;
        for(int i=0;i<M;i++){
            int w_sum = 0;
            for(int j=i;j<M;j++){
                w_sum += w[j];
                ans += h_count[w_sum];
            }
        }

        cout << ans << endl;
    }

    return 0;
}