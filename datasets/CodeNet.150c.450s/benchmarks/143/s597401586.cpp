#include<iostream>
#include<map>
using namespace std;
typedef long long ll;

int main(){
    int n;
    cin >> n;
    map<int,ll> m;
    ll sum = 0;
    for(int i = 0; i < n; i++){
        int a;  cin >> a;
        m[a]++;
        sum += a;
    }
    int q;
    cin >> q;
    while(q--){
        int b, c;
        cin >> b >> c;
        ll to = 0;
        if(m.count(b))  to = m[b], sum -= to*b, m.erase(b);
        if(to)  m[c] += to, sum += to*c;
        cout << sum << endl;
    }
    return 0;
}