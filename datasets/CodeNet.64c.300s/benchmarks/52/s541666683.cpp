#include <iostream>
using namespace std;
int ans;
int n, s;
//cnt := ??????????????????
void bfs(int cnt, int sum, int times){
    if(cnt == n){
        if(sum == s){
            ans++;
        }
        return;
    }
    if(times == 10){
    	return;
    }
    bfs(cnt+1, sum+times, times+1);
    bfs(cnt, sum, times+1);
}
int main(void){
    while(cin >> n >> s && n+s != 0){
        ans = 0;
        bfs(0,0,0);
        cout << ans << endl;
    }
    return 0;
}