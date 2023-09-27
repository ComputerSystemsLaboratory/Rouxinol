#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<cstdio>
#include<cstring>
#include<set>
using namespace std;

#define rep(i,n) for(int i=0;i<n;i++)
#define REP(n) rep(i,n)
#define all(n) n.begin(),n.end()

int main()
{
    int m; cin >> m;
    while(m--)
    {
        string s, ss, se;
        cin >> s;
        set<string> lines;

        for(int i = 1; i < s.size(); i++)
        {
            ss = s.substr(0, i);
            se = s.substr(i, s.size() - i);
            lines.insert( ss + se); lines.insert(se + ss);
            reverse(all(ss));
            lines.insert(ss + se); lines.insert(se + ss);
            reverse(all(se));
            lines.insert(ss + se); lines.insert(se + ss);
            reverse(all(ss));
            lines.insert(ss + se); lines.insert(se + ss);
        }
        cout << lines.size() << endl;
    }

    return 0;
}