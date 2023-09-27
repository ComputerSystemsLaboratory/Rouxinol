#include <bits/stdc++.h>

using namespace std;

int getDays(int y, int m, int d)
{
  int cnt = 0;
  for(int i = 1; i <= y; i++){
    for(int j = 1; j <= 10; j++){
      for(int k = 1; k <= 20; k++){
	if(i % 3 != 0 && j % 2 == 0 && k == 20) continue;
	cnt++;
	if(i == y && j == m && k == d) return cnt;
      }
    }
  }
}

int main()
{
  int clbday = getDays(1000, 1, 1);
  
  int n;
  cin >> n;
  while(n--){
    int Y, M, D;
    cin >> Y >> M >> D;
    cout << clbday - getDays(Y, M, D) << endl;
  }
  return 0;
}