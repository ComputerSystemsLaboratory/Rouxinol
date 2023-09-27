#include <cstdio>
#include <cstring>
#include <cmath>
#include <iostream>
#include <algorithm>
#include <stack>
#include <queue>
#include <vector>
#include <set>
using namespace std;

#define rep(i,n) for(int i=0;i<(n);i++)
#define mp(a,b) make_pair(a,b)
#define pb(a) push_back(a)
#define dbg(x) cout<<#x"="<<x<<endl

typedef long long ll;
typedef pair<int, int> pii;
typedef pair<pii, int> ppi;

#define INF 1000000000



int main(){

  while(true){
    int n;
    scanf("%d\n", &n);
    if(n==0)break;

    bool r=false, l=false; // false: on floor.
    bool last=false;
    int cnt=0;
    rep(i,n){
      char a,b;
      scanf("%c%c ", &a, &b);
      if(a=='r' && b=='u') r=true;
      else if(a=='r' && b=='u') r=true;
      else if(a=='r' && b=='d') r=false;
      else if(a=='l' && b=='u') l=true;
      else if(a=='l' && b=='d') l=false;

      if(last!=r && last!=l){
	cnt++;
	last=!last;
      }
    }
    cout << cnt << endl;

  }

}