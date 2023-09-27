#include <bits/stdc++.h>
using namespace std;

#define REP(i, n) for(int i = 0; i < n; i++)
#define RREP(i,n) for(int i = (n)-1; i >= 0; i--)
#define FOR(i, l, r) for(int i = l; i < r; i++)
#define RFOR(i, l,r) for(int i= (l)-1; i>= (r) ; i--)

#define int64 int64_t
#define uint64 uint64_t
#define uint unsigned

int main()
{
    int n;
    while(cin >> n){
        if(n <= 0) break;
        map<char, char> che;
    REP(i, n)
    {
        char a, b;
        cin >> a >> b;
        che[a] = b;
    }
    int m;
    cin >> m;
    string s;
    REP(i, m)
    {
        char tmp;
        cin >> tmp;
        auto c = che.find(tmp);
        s.push_back(c != che.end() ? c->second : tmp);
    }
    cout << s << '\n';
    }
}