#include <bits/stdc++.h>
using namespace std;
vector<int> prime_factorize(long long N) {
    vector<int> res;
    for (long long a = 2; a * a <= N; ++a) {
        if (N % a != 0) continue;
        long long ex = 0; // 指数

        // 割れる限り割り続ける
        while (N % a == 0) {
            res.push_back(a);
            N /= a;
        }

    }

    // 最後に残った数について
    if (N != 1) res.push_back(N);
    return res;
}

int main() {
    int n;cin>>n;
    cout<<n<<":";
    vector<int> ans=prime_factorize(n);
    for(int i=0;i<ans.size();i++){
        cout<<" "<<ans[i];
    }
    cout<<endl;
}
