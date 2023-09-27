#include <iostream>
#include <map>
using namespace std;

int n, q;
map<int, int> mp;
long long sum;

int main() {
    cin >> n;
    for(int i = 1; i <= n; i++) {
        int x;
        cin >> x;
        if(mp.find(x) != mp.end()) mp[x]++;
        else mp[x] = 1;
        sum += 1LL*x;
    }

    cin >> q;
    while(q--) {
        int b, c;
        cin >> b >> c;
        if(mp.find(b) != mp.end()) {
            sum -= 1LL*mp[b]*b;
            sum += 1LL*mp[b]*c;
            if(mp.find(c) != mp.end()) mp[c] += mp[b];
            else mp[c] = mp[b];
            mp.erase(mp.find(b));
        }
        cout << sum << '\n';
    }

}
