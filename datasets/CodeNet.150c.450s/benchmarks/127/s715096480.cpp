#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<stack>
#include<queue>
#include<map>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<set>
using namespace std;

#define rep(i,n) for(int i=0;i<n;i++)
#define REP(n) rep(i,n)

string s, s1, s2, s3, s4;
int m, l;

int main()
{
    cin >> m;
    REP(m)
    {
        set<string> ss;
        cin >> s;
        l = s.size();

        rep(j,l-1)
        {
            s1 = s.substr(0, j+1);
            s2 = s.substr(0, j+1); reverse(s2.begin(), s2.end());
            s3 = s.substr(j+1, l - j - 1);
            s4 = s.substr(j+1, l - j - 1); reverse(s4.begin(), s4.end());
            

            ss.insert(s1 + s3);
            ss.insert(s3 + s1);
            ss.insert(s1 + s4);
            ss.insert(s4 + s1);
            ss.insert(s2 + s3);
            ss.insert(s3 + s2);
            ss.insert(s2 + s4);
            ss.insert(s4 + s2);
        }
        cout << ss.size() << endl;
    }

    return 0;
}