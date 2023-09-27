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

void calc(int n,int r){
  stack<int> card;

  for(int i=0;i<n;i++){
    card.push(i+1);
  }

  for(int i=0;i<r;i++){
    int p,c;
    stack<int> s1,s2;

    scanf("%d%d",&p,&c);

    for(int i=0;i<p-1;i++){
      s1.push(card.top());
      card.pop();
    }

    for(int i=0;i<c;i++){
      s2.push(card.top());
      card.pop();
    }

    for(int i=0;i<p-1;i++){
      card.push(s1.top());
      s1.pop();
    }

    for(int i=0;i<c;i++){
      card.push(s2.top());
      s2.pop();
    }

    
    
  }
  
  printf("%d\n",card.top());

}

int main(){
  int n,r;

  while(1){
    scanf("%d%d",&n,&r);
    if(n==0) break;
    calc(n,r);
  }
  
  return 0;
}