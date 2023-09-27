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
/*

    1: . , ! ? (スペース)
    2: a b c
    3: d e f
    4: g h i
    5: j k l
    6: m n o
    7: p q r s
    8: t u v
    9: w x y z
    0: 確定ボタン */
char keitai[10][5]={
  {'.', ',' ,'!','?',' '},
  {'a','b','c'},
  {'d','e','f'},
  {'g','h','i'},
  {'j','k','l'},
  {'m','n','o'},
  {'p','q','r','s'},
  {'t','u','v'},
  {'w','x','y','z'},
};
string str;
int main()
{
  int n;
  cin >>n;
  for(int i = 0;i < n;i++){
    int cnt[15] = {0};
    cin >>str;
    for(int i = 0;i < str.length();i++){
      if(i >0&&str[i]=='0'&&str[i-1]!='0'){
	if((str[i-1]=='1')){
	  cout <<keitai[(str[i-1]-'0')-1][(cnt[(str[i-1]-'0')]-1)%5];
	  cnt[str[i-1]-'0'] = 0;
	}
	else if((str[i-1]=='7'||str[i-1]=='9')){
	  cout <<keitai[(str[i-1]-'0')-1][(cnt[str[i-1]-'0']-1)%4];
	  cnt[str[i-1]-'0'] = 0;
	}else{
	  cout <<keitai[(str[i-1]-'0')-1][(cnt[str[i-1]-'0']-1)%3];
	  cnt[str[i-1]-'0'] = 0;	  
	}
      }
      if(str[i] !='0'){
	cnt[str[i]-'0'] +=1;
      }
    }
    cout <<endl;
  }
  return 0;
}