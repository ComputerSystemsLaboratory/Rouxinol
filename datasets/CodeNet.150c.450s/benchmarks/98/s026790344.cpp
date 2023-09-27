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
#define SIZE 100000

void calc(int n,int m){
  int suma=0,sumb=0;
  int s[SIZE];

  for(int i=0;i<n+m;i++){
    scanf("%d",s+i);
    if(i<n) suma += s[i];
    else sumb += s[i];
  }

  int sum=INF,a=-1,b=-1;
  
  for(int i=0;i<n;i++){

    for(int j=n;j<n+m;j++){
      if(suma+(s[j]-s[i]) == sumb-(s[j]-s[i])){
	if(sum > s[j] + s[i]){
	  a = s[i];
	  b = s[j];
	  sum = a+b;
	}
      }
    }
  }

  if(sum==INF)
    puts("-1");
  else
    printf("%d %d\n",a,b);
  
  
  return;
}

int main(){
  int n,m;
  
  while(1){
    scanf("%d%d",&n,&m);
    if(n==0) break;
    calc(n,m);
  }

  return 0;
}