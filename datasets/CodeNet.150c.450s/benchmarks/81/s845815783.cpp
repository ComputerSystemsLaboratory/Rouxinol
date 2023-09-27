#include <bits/stdc++.h>

using namespace std;
const int N = 107;
#define inf 0x3f3f3f3f
int dis[N][N];
int main()
{
    int n;
    std::ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);
    while(cin >> n , n) {
        int v = 0, a, b, c;
        for(int i = 0;i < N;i ++) for(int j = 0;j < N;j ++)  dis[i][j] = (i == j) ? 0 : inf;
        for(int i = 1;i <= n;i ++) {
            cin >> a >> b >> c;
            dis[a][b] = dis[b][a] = c;
            v = max(max(v, a), b);
        }
        v ++;
        for(int k = 0;k < v;k ++) {
            for(int j = 0;j < v;j ++) {
                for(int i = 0;i < v;i ++) {
                    dis[i][j] = min(dis[i][j], dis[i][k] + dis[k][j]);
                }
            }
        }
        int ans1,ans2 = inf,x;
        for(int i = 0;i < v;i ++) {
            x = 0;
            for(int j = 0;j < v;j ++) {
                x += dis[i][j];
            }
            if(x < ans2) {
                ans1 = i, ans2 = x;
            }
        }
        cout << ans1 << " " << ans2 << endl;
    }
    return 0;
}