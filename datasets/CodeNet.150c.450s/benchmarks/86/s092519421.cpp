#include<bits/stdc++.h>
using namespace std;
using i64 = int_fast64_t;
#define rep(i, N) for(int (i) = 0; (i) < (N); (i)++)
#define all(v) (v).begin(), (v).end()
#define eb emplace_back

int main(){
    int N, M, P;
    while(cin >> N >> M >> P, N != 0){
        vector<int> vote(N);
        int sum = 0;
        rep(i, N) {
            cin >> vote[i];
            sum += vote[i];
        }
        sum = (100 - P) * sum;
        if(vote[M-1] == 0) cout << 0 << endl;
        else cout << sum / vote[M-1] << endl;
    }
}

