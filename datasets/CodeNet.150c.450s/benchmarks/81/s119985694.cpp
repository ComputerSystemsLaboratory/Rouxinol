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

//4方向ベクトル→↑←↓
int dx[] ={1,0,-1,0};
int dy[] ={0,-1,0,1};
int n;//道の数
int cost[10][10];//町iからjへのコスト
const int INF =10000000;
int a1,b1,c1;
int ans;
int minV;
int maxV;
int main()
{
  while(cin >>n,n){
  ans = INF;
  maxV =0;
  for(int i = 0;i <10;i++){
    for(int j = 0;j <10;j++){
      if(i!=j)
	cost[i][j] =INF;
      else
	cost[i][j] = 0;
    }
  }
  for(int i = 0;i < n;i++){
    cin >>a1>>b1>>c1;
    cost[a1][b1] = c1;
    cost[b1][a1] = c1;
    maxV =max(maxV,max(a1,b1));
  }
  for(int i = 0;i <=maxV;i++){
    for(int j = 0;j <=maxV;j++){
      for(int k = 0;k <=maxV;k++){
	cost[j][k] =min(cost[j][k],cost[j][i]+cost[i][k]);
      }
    }
  }
  for(int i = 0;i <=maxV;i++){
    int anstemp =0;
    for(int j = 0;j <=maxV;j++){
      anstemp +=cost[i][j];
    }
    if(ans >anstemp){
      ans = anstemp;
      minV = i;
    }
  }
  cout <<minV<<" "<<ans<<endl;
  }
  return 0;
}