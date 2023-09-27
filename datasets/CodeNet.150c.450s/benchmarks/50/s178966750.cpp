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

int N;

int main()
{
  while(cin >>N,N){
  N =1000-N;
  int ans = 0;
  int c[6] ={500,100,50,10,5,1};
  for(int i =0;i < 6;i++){
   while(N/c[i]){
      ans++;
      N -=c[i];
    }
  }
  cout <<ans<<endl;
  }
  return 0;
}