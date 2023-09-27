#include <bits/stdc++.h>
#include <unordered_set>
 
#define loop(n, i) for(int i=0;i<n;i++)
#define all(v) v.begin(),v.end()
#define HERE cout << "HERE: " << __LINE__ << endl;
#define INSP(v) cout << v << " at " << __LINE__ << endl;

using namespace std;
typedef long long ll;

int main()
{
    int m; cin >> m;
    loop (m, _m) {
        unordered_set<string> S;
        string s; cin >> s;
        int l = s.size();
        for (int i = 1; i < l; i++) {
            string a = s.substr(0, i), b = s.substr(i);
            string ra = a, rb = b;
            reverse(all(ra));
            reverse(all(rb));
            S.insert({
                    b + a,
                    ra + b,
                    b + ra,
                    a + rb,
                    rb + a,
                    ra + rb
                    });
        }
        cout << S.size() << endl;
    }
    return 0;
}