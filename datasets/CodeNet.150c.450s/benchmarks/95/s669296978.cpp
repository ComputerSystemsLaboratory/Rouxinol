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

void calc(int n){
  string s;
  int ans =  0;
  bool l=false, r=false,last = false;

  for(int i=0;i<n;i++){
    cin >> s;
    
    if(s=="lu") l = true;
    if(s=="ru") r = true;
    if(s=="ld") l = false;
    if(s=="rd") r = false;
    
    if(l == r && l ^ last){
      ans++;
      last = l;
    }
  }
  
  printf("%d\n",ans);

}

int main(){
  int n,m;

  while(1){
    scanf("%d",&n);
    if(n==0) break;
    calc(n);
  }
  
  return 0;
}