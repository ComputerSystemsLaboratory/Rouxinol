#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<int, int>;
const ll MOD = 1000000007;

int main(){
    const int max_n = 1000002;
    vector<int> nums;
    for(int i=1;i<200;i++){
        int n = i * (i + 1) * (i + 2) / 6;
        if(max_n < n) break;
        nums.push_back(n);
    }

    vector<int> all(max_n, max_n);
    vector<int> odd(max_n, max_n);

    all[0] = 0;
    odd[0] = 0;
    for(int i=0;i<max_n;i++){
        for(int n : nums){
            if(max_n <= i + n) break;
            all[i+n] = min(all[i+n], all[i] + 1);
        }
        for(int n : nums){
            if(max_n <= i + n) break;
            if(n % 2 == 1) odd[i+n] = min(odd[i+n], odd[i] + 1);
        }
    }

    while(true){
        int N;
        cin >> N;
        if(N == 0) break;
        cout << all[N] << " " << odd[N] << endl;
    }

    return 0;
}