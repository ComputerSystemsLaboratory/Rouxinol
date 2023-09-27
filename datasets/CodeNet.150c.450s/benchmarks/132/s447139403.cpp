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
#define SIZE 51

void calc(int n,int p){
  int stone[SIZE] = {};
  int q = p;

  while(1){

    for(int i=0;i<n;i++){
      if(q > 0){
	stone[i]++;
	q--;
      }else{
	q += stone[i];
	stone[i] = 0;
      }

      if(stone[i]==p){
	printf("%d\n",i);
	return;
      }
    }

  }
  
}

int main(){
  int n,p;

  while(1){
    scanf("%d%d",&n,&p);
    if(n==0) break;
    calc(n,p);
  }
  
  return 0;
}