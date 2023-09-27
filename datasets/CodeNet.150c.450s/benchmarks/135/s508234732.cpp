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
int N,M;
int h[1500];
int w[1500];
int sum_w[1500];//横の和
int sum_h[1500];//縦の和
vector<int> wa,wb;
int main()
{
  while(cin>>N>>M,N||M){
    wa.clear();
    wb.clear();
    for(int i = 0;i <1500;i++){
      sum_w[i] =sum_h[i]=0;
    }
    h[0] = 0;
    w[0] = 0;
    for(int i = 1;i <=N;i++){
      cin>>h[i];
      h[i] +=h[i-1];
    }
    for(int i = 1;i <=M;i++){
      cin>>w[i];
      w[i]+=w[i-1];
    }
    for(int i = 0;i <=N;i++){
      for(int j = 0;j <i;j++){
	wa.push_back(h[i]-h[j]);
      }
    }
    for(int i = 0;i <=M;i++){
      for(int j = 0;j <i;j++){
	wb.push_back(w[i]-w[j]);
      }
    }
    sort(wa.begin(),wa.end());
    sort(wb.begin(),wb.end());
    int cnt = 0;
    
    for(int i =0;i <wa.size();i++){
      int d =wa[i];
      int pos =lower_bound(wb.begin(),wb.end(),d)-wb.begin();
      for(;pos<wb.size()&&wb[pos]==d;pos++){
	cnt++;
      }
    }
    cout <<cnt<<endl;
  }
  return 0;
}