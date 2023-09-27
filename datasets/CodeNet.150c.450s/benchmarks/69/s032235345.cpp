#include <iostream>
using namespace std;

int ball[10];

bool DFS(int B,int C,int cnt){
  if(cnt == 10)
    return true;

  bool ans = false;
  if(B < ball[cnt])
    ans = DFS(ball[cnt],C,cnt+1);
  if(C < ball[cnt])
    ans = DFS(B,ball[cnt],cnt+1);

  return ans;
}

int main(){
  int n;
  cin >> n;

  while(n--){
    for(int i = 0; i < 10; i++)
      cin >> ball[i];

    if(DFS(0,0,0)==true)
      cout << "YES" << endl;
    else
      cout << "NO" << endl;
  }
  return 0;
}