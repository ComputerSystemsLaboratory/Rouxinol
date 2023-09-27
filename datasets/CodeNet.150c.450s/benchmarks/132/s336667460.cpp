#define _GLIBCXX_DEBUG //vectorの範囲外アクセスなどのエラーメッセージが分かりやすくなるらしい


#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
//#include <algorithm>

// using namespace std;
#include<numeric>

#include<iostream>
#include<string>
#include<vector>
#include<queue>
#include<deque>
#include<stack>
#include<set>
#include<map>
#include<cstdio>
#include<cstdlib>
#include<cassert>
#include<cstring>
#include<cmath>
#include<complex>


#define REP(i,a,b) for(int i=a;i<b;i++)
#define rep(i,n) REP(i,0,n)

#define FOR(i,c) for(typeof((c).begin())i=(c).begin();i!=(c).end();++i)


#define EXIST(e,s)((s).find(e)!=(s).end())
#define RESET(a) memset((a),0,sizeof(a))
#define SET(a) memset((a),-1,sizeof(a))

 



#define ll long long

using namespace std;

int main(void){
  int n;
  int p;

  int temoto[50];
  int wan;
  bool flag;

  while(cin >> n >> p, n || p){
    flag = false;
    memset(temoto, 0, sizeof(temoto[0])*50);
    wan = p;
    while(1){
      for(int i=0; i<n; i++){
	if(wan > 0){
	  wan--;
	  temoto[i]++;
	  if(temoto[i] == p){
	    cout << i << endl;
	    flag = true;
	    break;
	  }
	}else{
	  wan += temoto[i];
	  temoto[i] = 0;
	}
      }
      if(flag){
	break;
      }
    }
  }
    
    
    
    return 0;
}