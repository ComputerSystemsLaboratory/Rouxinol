#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MOD = 998244353;
const ll INF = 1LL << 60;
ll mod_pow(ll, ll, ll); ll mod_fact(ll, ll); ll mod_inv(ll, ll); ll gcd(ll, ll); ll lcm(ll, ll);
//
vector<int> nums;
vector<ll> lis;
int bis(ll num){
    int left = -1;
    int right = lis.size() - 1;
    while(right - left != 1){
        int middle = (left + right) / 2;
        if(lis[middle] >= num) right = middle;
        else left = middle;
    }
    return right;
}
int main(){
    int n;
    cin >> n;
    nums.resize(n);
    lis.resize(n, INF);
    for(int i = 0; i < n; i++) cin >> nums[i];
    for(int i = 0; i < n; i++){
        lis[bis(nums[i])] = nums[i];
    }
    for(int i = n - 1; i >= 0; i--){
        if(lis[i] != INF){
            cout << i + 1 << endl;
            return 0;
        }
    }
}
