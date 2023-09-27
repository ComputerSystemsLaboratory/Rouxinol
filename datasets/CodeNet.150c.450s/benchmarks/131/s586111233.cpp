#include <iostream>
#include <algorithm>
#include <cstring>
#include <vector>
int memo[1000000];
using namespace std;

int next(int a,int keta){
  int tbl[6]={};
  int p = 0;
  while(a){
    tbl[p++] = a%10;
    a/=10;
  }
  int Max = 0, Min = 0;
  sort(tbl,tbl+keta);
  int pow10 = 1;
  for(int i=0;i<keta;++i){
    Max+=pow10*tbl[i];
    Min+=pow10*tbl[keta-1-i];
    pow10*=10;
  }
  return Max-Min;
}


int main(){
  int a,keta;
  while(cin>>a>>keta,a||keta){
    memset(memo,-1,sizeof(memo));
    int i = 0;
    while(true){
      if(memo[a]!=-1){
	break;
      }
      memo[a] = i;
      i++;
      a = next(a,keta);
    }
    cout << memo[a] << " " << a << " " << i-memo[a] << endl;
  }
  return 0;
}