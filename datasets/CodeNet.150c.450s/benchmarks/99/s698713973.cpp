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
string str[2];
int main()
{
  int n;
  string str1,str2;
  int ans[2];
  cin>>n;
  for(int i = 0;i < n;i++){
    cin>>str[0]>>str[1];
    ans[0]=ans[1]= 0;
    for(int i = 0;i <2;i++){
      for(int j = 0;j < str[i].length();j++){
	if(str[i][j]=='m'){
	  if(str[i][j-1]>='2'&&str[i][j-1]<='9'){
	    ans[i] +=1000*(str[i][j-1]-'0');
	  }else{
	    ans[i] +=1000;
	  }
	}else if(str[i][j]=='c'){
	  if(str[i][j-1]>='2'&&str[i][j-1]<='9'){
	    ans[i] +=100*(str[i][j-1]-'0');
	  }else{
	    ans[i] +=100;
	  }
	}else if(str[i][j]=='x'){
	  if(str[i][j-1]>='2'&&str[i][j-1]<='9'){
	    ans[i] +=10*(str[i][j-1]-'0');
	  }else{
	    ans[i] +=10;
	  }
	}else if(str[i][j]=='i'){
	  if(str[i][j-1]>='2'&&str[i][j-1]<='9'){
	    ans[i] +=1*(str[i][j-1]-'0');
	  }else{
	    ans[i] +=1;
	  }
	}
      }
    }
    int sum = ans[0]+ans[1];
    int k;
    if(sum/1000){
      k = sum/1000;
      if(k==1){
	cout <<"m";
      }else
	cout<<k<<"m";
      sum -=k*1000;
    }
    if(sum/100){
      k =sum/100;
      if(k==1){
	cout <<"c";
      }else
	cout<<k<<"c";
      sum -=k*100;
    }
    if(sum/10){
      k =sum/10;
      if(k==1){
	cout <<"x";
      }else
	cout<<k<<"x";
      sum -=k*10;
    }
    if(sum/1){
      k = sum/1;
      if(k==1){
	cout <<"i";
      }else
	cout<<k<<"i";
      sum -=k*1;
    }
    cout<<endl;
  }
  return 0;
}