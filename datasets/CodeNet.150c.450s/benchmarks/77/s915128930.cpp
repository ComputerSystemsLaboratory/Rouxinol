#include <bitset>
#include <vector>
#include <map>
#include <set>
#include <stack>
#include <queue>
#include <cstring>
#include <string>
#include <sstream>
#include <algorithm>
#include <iomanip>
#include <iostream>
 
#define VARIABLE(x) cerr << #x << "=" << x << endl
#define BINARY(x) cerr << #x << "=" << static_cast<bitset<16> >(x) << endl;
#define rep(i,n) for(int i=0;i<(int)(n);i++)
#define REP(i,m,n) for (int i=m;i<(int)(n);i++)
 
const int INF = 10000000;
int dx[4]={1, 0, -1, 0}, dy[4]={0, 1, 0, -1};
using namespace std;
typedef long long  ll;
typedef pair<int, int> P;
 
/** Problem2000 : Misterious Gems **/
int main()
{
    P now;
    map<P, bool> gems;
    int N, M, got;
     
    while (cin>>N, N) {
        now = P(10, 10);
        got=0;
        gems.clear();
        rep(i, N) {
            int x, y;
            cin >> x >> y;
            gems[P(x, y)] = true;
        }
        cin >> M;
        rep(i, M) {
            char d; int a, dx=0, dy=0;
            cin >> d >> a;
            switch (d) {
                case 'N': dy=1; break;
                case 'E': dx=1; break;
                case 'S': dy=-1; break;
                case 'W': dx=-1; break;
            }
            rep(j, a) {
                now.first += dx;
                now.second += dy;
                 
                if (gems[P(now.first, now.second)]) {
                    got++;
                    gems[P(now.first, now.second)] = false;
                }
            }
        }
        if (got==N)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
}