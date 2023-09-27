#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <queue>
#include <set>
#include <map>
#include <cmath>
using namespace std;
typedef long long i64;
typedef long double ld;
typedef pair<i64,i64> P;
#define rep(i,s,e) for(int i = (s);i <= (e);i++)

int w,h;

int main()
{
    while(cin >> w >> h,w)
    {
        vector<vector<int>> fie(h,vector<int>(w,0));
        rep(i,0,h - 1)rep(j,0,w - 1) cin >> fie[i][j];
        int res = 0;
        rep(i,0,h - 1)rep(j,0,w - 1){
            if(fie[i][j])
            {
                queue<P> que;
                res++;
                que.push({i,j});
                fie[i][j] = 0;
                while(!que.empty())
                {
                    auto p = que.front();
                    que.pop();

                    for(int i = p.first - 1;i <= p.first + 1;i++)
                    {
                        for(int j = p.second - 1;j <= p.second + 1;j++)
                        {
                            if(0 <= i && i < h && 0 <= j && j < w && fie[i][j])
                            {
                                que.push({i,j});
                                fie[i][j] = 0;
                            }
                        }
                    }
                }
            }
        }
        cout << res << endl;
    }
}
