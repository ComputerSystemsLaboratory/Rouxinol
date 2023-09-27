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
#define SIZE 1001

bool calc(){
  string s;
  int l;
  map<string,int> ss;
  
  
  cin >> s >> l;
  
  if(l==0) return false;

  while(s.size()<l) s = "0"+s;

  ss[s] = 0;

  for(int i=1;;i++){
    string s1 = s,s2;

    sort(s1.begin(),s1.end());

    s2 = s1;

    reverse(s2.begin(),s2.end());

    s = to_string(stoi(s2) - stoi(s1));
    
    while(s.size()<l) s = "0"+s;

    auto it = ss.find(s);
    
    
    if(it!=ss.end()){
      printf("%d %d %d\n",it->second,stoi(s),i-it->second);
      break;
    }
    
    ss[s] = i;
  }
  
  
  return true;
}

int main(){
    
  while(calc());
  
  return 0;
}