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

int stone[50];

int main(){

  while(true){
    int n,p;
    cin >> n >> p;
    if(n==0 && p==0) break;

    rep(i,n) stone[i]=0;
    int bowl=p;
    int idx=0;
    while(true){
      if(stone[idx]+1==p) break;
     //??????????????????
      while(bowl>0){
	stone[idx]++;
	bowl--;
	idx = (idx+1)%n;
      }

      //?¬???????????????£????????????
      while(stone[idx]==0) idx=(idx+1)%n;

      //????????\??????
      bowl=stone[idx];
      stone[idx]=0;
      idx= (idx+1)%n;
    }

    cout << idx << endl;

  }
}