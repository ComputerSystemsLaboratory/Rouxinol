#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <queue>
using namespace std;

int N;

bool is_prime(int n){
    for(int i = 2; i * i <= n; ++i){
        if(n % i == 0) return false;
    }
    return true;
}

int main() {
    cin.tie(0); ios_base::sync_with_stdio(false);
    cin >> N;

    int n, ans = 0;
    for(int i = 0; i < N; ++i){
        cin >> n;
        if(is_prime(n)) ++ans;
    }
    cout << ans << '\n';
    return 0;
}
