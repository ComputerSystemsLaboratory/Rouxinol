#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    vector<int> ns;
    int temp, max_n = 0;
    while(cin >> temp){
        ns.push_back(temp);
        max_n = max(temp, max_n);
    }
    max_n++;

    vector<bool> is_prime(max_n, true);
    vector<int> primes;
    for(ll i=2;i<max_n;i++){
        if(is_prime[i]){
            primes.push_back(i);
            for(ll j=i*i;j<max_n;j+=i){
                is_prime[j] = false;
            }
        }
    }

    for(int n: ns){
        int ans = upper_bound(primes.begin(), primes.end(), n) - primes.begin();
        cout << ans << endl;
    }

    return 0;
}