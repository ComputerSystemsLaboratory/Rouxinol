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

int dx[4] = {-1,0,1,0};
int dy[4] = {0,-1,0,1};

bool calc(){
  string s;
  set<string> ss;
  
  cin >> s;
  
  for(int i=1;i<s.size();i++){
    string a = s.substr(0,i);
    string b = s.substr(i);

    string ra = a,rb = b;
    
    reverse(ra.begin(),ra.end());
    reverse(rb.begin(),rb.end());

    ss.insert(a+b);
    ss.insert(ra+b);
    ss.insert(a+rb);
    ss.insert(ra+rb);
    ss.insert(b+a);
    ss.insert(rb+a);
    ss.insert(b+ra);
    ss.insert(rb+ra);
  }

  printf("%d\n",(int)ss.size());
  
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