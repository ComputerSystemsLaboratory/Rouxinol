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
int N;//宝石の数
int M;//ロボットに与えた命令の個数
int main()
{
  int x,y;
  while(cin>>N,N){
    int juery[30][30];
    int px = 10;
    int py = 10;
    int ans = N;
    for(int i = 0;i <=20;i++){
      for(int j = 0;j <=20;j++){
	juery[i][j]=0;
      }
    }
    for(int i = 0;i <N;i++){
    cin>>x>>y;
    juery[y][x] = 1;
    }
    cin>>M;//命令の数
    char order;
    for(int j = 0;j <M;j++){
      cin>>order;
      cin >>x;//移動距離
      if(order=='N'){
        for(int i =0; i <x;i++){
	  py +=1;
	  if(juery[py][px]==1){
	    // cout <<juery[py][px]<<endl;
	    //cout <<"get"<<endl;
	    juery[py][px]=0;
	    ans--;
	  }
	}
      }else if(order=='E'){
	for(int i = 0;i <x;i++){
	  px +=1;
	  if(juery[py][px]==1){
	    // cout <<juery[py][px]<<endl;
	    // cout <<"get"<<endl;
	    juery[py][px]=0;
	    ans--;
	  }
	}
      }else if(order=='S'){
	for(int i = 0;i <x;i++){
	  py -=1;
	  if(juery[py][px]==1){
	    // cout <<juery[py][px]<<endl;
	    juery[py][px]=0;	    
	    ans--;
	  }
	}
      }else if(order=='W'){
	for(int i = 0;i <x;i++){
	  px -=1;
	  if(juery[py][px]==1){
	    juery[py][px]=0;
	    ans--;
	  }
	}
      }
    }
    if(ans!=0){
      cout <<"No"<<endl;
    }else{
      cout <<"Yes"<<endl;
    }
  }
    
  return 0;
}