#include<cstdio>
#include<iostream>
#include<vector>
#include<map>
#include<set>
#include<queue>
#include<algorithm>
#include<string>
#include<cstring>
#include<cstdlib>
#include<cctype>
#include<sstream>
#include<stack>
#include<functional>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
const int INF=0x3f3f3f3f;
const int MAX_N = 105;
const int dx[] = {0, 0, 1, -1};
const int dy[] = {1, -1, 0, 0};
char tr[MAX_N][MAX_N];
int H, W;
void dfs(int x, int y, char c){
    tr[x][y] = '.';
    for(int i = 0; i < 4; i++){
        int nx = x + dx[i], ny = y + dy[i];
       if(nx >= 0 && nx < H && ny >= 0 && ny < W && tr[nx][ny] == c){
            dfs(nx, ny, c);
        }
    }

}
int main()
{
	#ifdef LOCAL
		freopen("in.txt","r",stdin);
	//	freopen("out.txt","w",stdout);
	#endif
	//ios::sync_with_stdio(false);
	while(cin >> H >> W && (H || W)){
        for(int i = 0; i < H; i++)scanf("%s", tr[i]);
        int ans = 0;
        for(int i = 0; i < H; i++){
            for(int j = 0; j < W; j++)
            if(tr[i][j] != '.'){
                ans++;
                dfs(i, j, tr[i][j]);
            }
        }
        cout << ans << endl;
	}
	return 0;
}