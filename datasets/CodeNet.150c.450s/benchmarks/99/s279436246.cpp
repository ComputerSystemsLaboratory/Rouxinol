#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <cstring>
#include <climits>
#include <vector>
#include <map>
#include <set>
#include <list>
#include <stack>
#include <queue>
#include <algorithm>
#include <iostream>
#include <string>

#define REP(i,n) for(long long i=0;i<n;++i)
#define REPR(i,n) for(long long i=n;i>=0;--i)
#define REPI(itr,v) for(auto itr=v.begin();itr!=v.end();++itr)
#define REPIR(itr,v) for(auto itr=v.rbegin();itr!=v.rend();++itr)
#define FOR(i,a,b) for(long long i=a;i<b;++i)
#define SORT(v,n) sort(v, v+n)
#define SORTV(v) sort(v.begin(), v.end())
#define ALL(v) v.begin(),v.end()
#define llong long long
#define INF 999999999
#define MOD 1000000007
#define pb push_back
#define pf push_front
#define MP make_pair
#define SV(v) {for(long long sitr=0;sitr<v.size();++sitr){cin>>v[sitr];}}

int dx[] = {0, 0, -1, 1};
int dy[] = {1, -1, 0, 0};

using namespace std;

typedef pair<int,int> pii;

int conv_int(string s){
  int len = s.length();
  int res = 0;
  int last = -1;
  REP(i,len){
    if(s[i] == 'm'){
      if(last == -1) res += 1000;
      else res += last * 1000;
      last = -1;
    }else if(s[i] == 'c'){
      if(last == -1) res += 100;
      else res += last * 100;
      last = -1;
    }else if(s[i] == 'x'){
      if(last == -1) res += 10;
      else res += 10 * last;
      last = -1;
    }else if(s[i] == 'i'){
      if(last == -1) res += 1;
      else res += last;
      last = -1;
    }else{
      last = s[i] -'0';
    }
  }
  return res;
}

string conv_str(int n){
  string res = "";

  if(n >= 1000){
    int num = n / 1000;
    if(num > 1){
      res += to_string(num);
    }
    res += "m";
  }
  n %= 1000;
  if(n >= 100){
    int num = n / 100;
    if(num > 1){
      res += to_string(num);
    }
    res += "c";
  }
  n %= 100;
  if(n >= 10){
    int num = n / 10;
    if(num > 1){
      res += to_string(num);
    }
    res += "x";
  }
  n %= 10;
  if(n > 0){
    if(n > 1){
      res += to_string(n);
    }
    res += "i";
  }
  return res;
}

int main(){

  int n;
  cin >> n;
  REP(ii,n){
    string s1, s2;
    cin >> s1 >> s2;
    int num = conv_int(s1) + conv_int(s2);
    cout << conv_str(num) << endl;
  }
  return 0;
}


