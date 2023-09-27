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
  int card[50];
  int tmp[50];

  while(true){
    int n,r;
    cin >> n >> r;
    if(n==0 && r==0)break;

    rep(i,n) card[i]=n-i;

    rep(i,r){
      int p,c;
      scanf("%d %d", &p, &c);
      p--;

      rep(j,c){
	tmp[j]=card[p+j];
      }
      rep(j,p){
	card[c+p-j-1] = card[p-j-1];
      }
      rep(j,c){
	card[j]=tmp[j];
      }
    }

    cout << card[0] << endl;

  }

}