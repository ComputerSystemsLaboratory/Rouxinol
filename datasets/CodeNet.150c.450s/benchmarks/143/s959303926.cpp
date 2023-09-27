#include <iostream>
#include <cstring>
#include <vector>
using namespace std;
long long n,i,s,a,b,q;
vector<long long> cnt;
int main() {
  /*  cin >> n;
    s = "";
    while(n > 1) {
        if(n%26 == 0) s += 'z';
        else s += (char)('a'+n%26-1);
        n /= 26;
    }
    
    if(n == 1) s = "a" + s;
    cout << s;*/
    cin >> n;
    cnt.resize(100001);
    s = 0;
    for(i = 0; i < n; i++) {
        cin >> a;
        cnt[a]++;
        s += a;
    }
    cin >> q;
    for(i = 0; i < q; i++) {
        cin >> a >> b;
        s = s-cnt[a]*a+cnt[a]*b;
        cnt[b] += cnt[a];
        cnt[a] = 0;
        cout << s << endl;
    }
    return 0;
}