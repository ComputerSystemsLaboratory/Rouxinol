#include <iostream>
using namespace std;

int n,s,res;

void dfs(int decided, int i, int sum){
  if(decided == n){
    if (sum == s) res++;    
    return;
  }

  //0~9を選り好みしてn個決められなかったとき終了
  if(i > 9) return;

  //iを足さない
  dfs(decided,i+1,sum);

  //iを足す
  dfs(decided+1,i+1,sum+i);
}


int main(){
  while(true){
    res = 0;
    cin >> n >> s;
    if(n == 0 && s == 0) break;
    dfs(0,0,0);
    cout << res << endl;
  }
  return 0;
}