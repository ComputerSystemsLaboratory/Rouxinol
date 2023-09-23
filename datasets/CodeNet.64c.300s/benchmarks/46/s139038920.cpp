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
#define lengthof(x) (sizeof(x) / sizeof(*(x)))
#define FILL(ptr, value) FILL_((ptr), sizeof(ptr)/sizeof(value), (value))
template <typename T>
void FILL_(void * ptr, size_t size, T value){
  std::fill((T*)ptr, (T*)ptr+size, value);
}
//4方向ベクトル→↑←↓
int dx[] ={1,0,-1,0};
int dy[] ={0,-1,0,1};
bool prime[1000550];
int main()
{
  for(int i =2 ;i <=1000500;i++){
    prime[i] =true;
  }
  prime[0] = false;
  prime[1] = false;
  for(int i = 2;i*i<=1000500;i++){
    if(prime[i]){
      for(int j = 2*i;j <=1000500;j +=i){
	prime[j] = false;
      }
    }
  }
  int a,d,n;
  int ans;
  while(cin>>a>>d>>n,a||d||n){
    long long int sum =a;
    bool flag = false;
    int cnt;
    while(!flag){
      cnt = 0;
      for(unsigned long long int i = sum;cnt!=n;i+=d){
	if(prime[i]){
	  cnt++;
	  if(cnt==n){
	    ans = i;
	    flag = true;
	  }
	}
      }
    }
    cout <<ans<<endl;
  }

  return 0;
}