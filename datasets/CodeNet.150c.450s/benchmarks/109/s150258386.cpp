#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<map>
#include<cstring>
using namespace std;

#define rep(i,n) for(int i=0;i<n;i++)
#define REP(n) rep(i,n)
#define all(n) n.begin(),n.end()

const int H = 60 * 60, M = 60, CHAKU = 0, HATU = 1;

typedef pair<int, int> pp;

int main()
{
    int n;
    while(cin >> n && n)
    {
        int ans = 0, h, m, s;
        char t;
        vector<pp> tr;
        REP(n)
        {
            cin >> h >> t >> m >> t >> s;
            tr.push_back(pp(h * H + m * M + s, HATU));
            cin >> h >> t >> m >> t >> s;
            tr.push_back(pp(h * H + m * M + s, CHAKU));
        }
        sort(all(tr));

        int num = 0;
        REP(n * 2)
            if(tr[i].second == CHAKU){ num--; ans = max(ans, num);}
            else { num++; ans = max(ans, num);}

        cout << ans << endl;
    }
    return 0;
}