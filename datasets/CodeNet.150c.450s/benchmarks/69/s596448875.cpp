#include <bits/stdc++.h>
using namespace std;
int a[10];
bool dfs(int d, int l, int r){
    if(d == 10) return true;
    if(a[d] > l && dfs(d + 1, a[d], r))
      return true;
    if(a[d] > r && dfs(d + 1, l, a[d]))
       return true;
    return false;
}
int main(){
    int n;
    cin >> n;
    for(int k = 0; k < n; k++){
        for(int i = 0; i < 10; i++)
          cin >> a[i];
        if(dfs(0, 0, 0))
          puts("YES");
        else
          puts("NO");
    }
    return 0;
}