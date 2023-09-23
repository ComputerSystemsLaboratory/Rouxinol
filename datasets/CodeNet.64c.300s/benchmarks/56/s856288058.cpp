#include<iostream>

using namespace std;



bool isLarge(int y, int m){
  if(y%3 == 0 || m%2) return true;
  return false;
}
void solve(int y,int m,int d){
  int ans;
  if(isLarge(y,m)) ans = 20-d;
  else ans = 19-d;
  m++;
  for(int i = m; i <= 10; i++)
    if(isLarge(y,i)) ans += 20;
    else ans += 19;
  y++;

  for(int i = y; i < 1000; i++)
    for(int j = 1; j <= 10; j++)
      if(isLarge(i,j)) ans += 20;
      else ans += 19;

  cout << ans+1<< endl;
}
int main(){
  int n;
  cin >> n;
  while(n--){
    int y,m,d;
    cin >> y >> m >> d;
    solve(y,m,d);
  }
  return 0;
}