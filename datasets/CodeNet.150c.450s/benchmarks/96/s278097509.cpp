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

char t[9][5] = {
  {'.',',','!','?',' '},
  {'a','b','c',0,0},
  {'d','e','f',0,0},
  {'g','h','i',0,0},
  {'j','k','l',0,0},
  {'m','n','o',0,0},
  {'p','q','r','s',0},
  {'t','u','v',0,0},
  {'w','x','y','z',0}};
int sz[9] = {5,3,3,3,3,3,4,3,4};

int main(){
  int n;
  scanf("%d\n", &n);

  rep(i,n){
    char last=0; int cnt=0;
    while(true){
      char c;
      scanf("%c",&c);
      if(c==last){
	cnt++;
      }
      else if(c=='0' && last!=0){
	printf("%c", t[last-'1'][cnt%sz[last-'1']]);
	last=0;
	cnt=0;
      }
      else if(c=='\n'){
	break;
      }

      if(c!='0') last = c;
      else last = 0;
    }
    cout << endl;
  }
}