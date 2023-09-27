#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <cstring>

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <queue>
#include <stack>
#include <map>
#include <set>

#include <functional>
#include <cassert>

typedef long long ll;
using namespace std;

#define mod 1000000007 //1e9+7
#define INF 1000000000 //1e9
#define LLINF 2000000000000000000LL //2e18
#define SIZE 201

int to_num(string s){
  char c[5] = "mcxi";
  int t[4] = {1000,100,10,1};

  int ret = 0;
  
  for(int i=0;i<s.size();i++){
    for(int j=0;j<4;j++){
      if(s[i]==c[j]){
	if(i==0 || !('0'<=s[i-1] && s[i-1]<='9')) ret += t[j];
	else ret += t[j] * (s[i-1]-'0');
      }
    }
  }
  
  return ret;
}

string to_mcxi(int a){
  char c[5] = "ixcm";
  string ret;
  
  for(int i=0;i<4;i++){
    if(a%10>0) ret += c[i];
    if(a%10>1) ret += '0'+(a%10);

    a/=10;
  }

  reverse(ret.begin(),ret.end());
  
  return ret;
}

bool calc(){
  string a,b;

  cin >> a >> b;

  cout << to_mcxi(to_num(a)+to_num(b)) << endl;
  
  return true;
}

int main(){
  int m;
  
  scanf("%d",&m);
  
  for(int i=0;i<m;i++){
    calc();
  }
  
  return 0;
}