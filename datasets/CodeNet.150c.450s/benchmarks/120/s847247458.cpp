#include <set>
#include <map>
#include <list>
#include <queue>
#include <stack>
#include <cmath>
#include <ctype.h>
#include <ctime>
#include <cstdio>
#include <vector>
#include <string>
#include <bitset>
#include <cctype>
#include <cstdlib>
#include <cstring>
#include <utility>
#include <numeric>
#include <complex>
#include <sstream>
#include <fstream>
#include <iomanip>
#include <cassert>
#include <iostream>
#include <iterator>
#include <algorithm>

using namespace std;

#define REP(i, x, n) for(int i = x; i < n; i++)
#define rep(i, n) REP(i, 0, n)

//4方向ベクトル→↑←↓
int dx[] ={1,0,-1,0};
int dy[] ={0,-1,0,1};
int R;
int C;
int osenbei[10][10000];
int flag[11];
int ans;

int count(void){
  int temp,res = 0;

  for(int j = 0;j <C;j++){
    temp =0;
    for(int  i =0;i <R;i++){
      if(flag[i]&&!osenbei[i][j] ||!flag[i] &&osenbei[i][j])
	temp++;
    }
    if(temp <R-temp)//j列目を裏返したほうがいい
      res +=R-temp;
    else
      res +=temp;
  }
  return res;
}
  
void solve(int idx){
  int res;
  
  if(idx ==R-1){
    res =count();
    if(ans <res)
      ans = res;
    return;
  }
  flag[idx] = 1;//idx行を裏返す
  solve(idx+1);

  flag[idx] = 0;//idx行は裏返さない
  solve(idx+1);
  return;
}

int main()
{
  while(cin >>R>>C){
    if(R==0&&C==0)
      break;
    for(int i = 0;i < R;i++){
      for(int j = 0 ;j <C;j++){
	cin >>osenbei[i][j];
      }
  }
  ans = 0;
  solve(0);
  cout <<ans<<endl;
  }
  return 0;
}