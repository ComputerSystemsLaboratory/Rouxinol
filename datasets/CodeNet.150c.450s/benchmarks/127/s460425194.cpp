// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=1142&lang=jp
// set?????????
#include <bits/stdc++.h>
using namespace std;
int m;
string s, l, r, l2, r2;
int main() {
    scanf("%d", &m);
    for (int c=0; c<m; c++) {
        cin >> s;
        set<string> train;
        train.insert(s);
        for (int i=1; i<s.length(); i++) {
            l = s.substr(0, i); r = s.substr(i);
            l2 = l; r2 = r;
            reverse(l.begin(), l.end()); reverse(r.begin(), r.end());
            train.insert(l+r); train.insert(r+l); train.insert(l2+r); train.insert(r+l2);
            train.insert(l+r2); train.insert(r2+l); train.insert(l2+r2); train.insert(r2+l2);
        }
        printf("%d\n",train.size());
    }
}