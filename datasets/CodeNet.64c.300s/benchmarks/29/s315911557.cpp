#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <stack>
#include <queue>
#include <algorithm>

#define CH(N,A,B) (A<=N&&N<B)
#define REP(i,a,b) for(int i=a;i<b;i++)
#define RREP(i,a,b) for(int i=(b-1);a<=i;i--)

using namespace std;

const int INF = 1e9;
int e;

int main() {

  while(1){
    cin>>e;
    if(e==0) break;
    int m = INF;
    for(int z = 0; z <= 100; z++){
      for(int y = 0; y <= 1000; y++){
        int x = e - y*y - z*z*z;
        if(x < 0) continue;
        m = min(m,x+y+z);
      }
    }
    cout<<m<<endl;
  }

  return 0;
}