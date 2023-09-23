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

bool field[21][21];

int main(){

  while(true){
    int n,m;
    cin >> n;
    if(n==0) break;

    rep(i,21){
      rep(j,21) field[i][j]=false;
    }

    rep(i,n){
      int x,y;
      scanf("%d %d", &x, &y);
      field[x][y]=true;
    }

    scanf("%d\n", &m);

    int x=10, y=10;
    rep(i,m){
      char c; int d;
      scanf("%c %d\n", &c, &d);
      int dx=0,dy=0;
      switch(c){
      case 'N': dy=1; break;
      case 'E': dx=1; break;
      case 'S': dy=-1; break;
      case 'W': dx=-1; break;
      }
      rep(j,d){
	x+=dx; y+=dy;
	if(field[x][y]){
	  n--;
	  field[x][y]=false;
	}
      }
    }

    if(n==0) cout << "Yes" << endl;
    else cout << "No" << endl;

  }

}