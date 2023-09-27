#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cmath>
#include<ctime>
#include<cctype>
#include<climits>
#include<iostream>
#include<string>
#include<vector>
#include<map>
#include<list>
#include<queue>
#include<deque>
#include<algorithm>
#include<numeric>
#include<utility>
#include<complex>
#include<memory>
#include<functional>
#include<set>
 
using namespace std;
 
#define ALL(g) (g).begin(),(g).end()
#define REP(i, x, n) for(int i = x; i < n; i++)
#define rep(i,n) REP(i,0,n)
#define P(p) cout<<(p)<<endl;
#define PP(p) cout<<(p)<<" ";
#define pb push_back
#define mp make_pair
#define INF 1e18

typedef long long ll;
#define int ll
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<string> vs;
typedef vector<char> vc;
typedef pair<int, int> pi;
//int dy[8]={1,1,1,0,-1,-1,-1,0};
//int dx[8]={-1,0,1,1,1,0,-1,-1};
int dx[4]={0,1,0,-1};
int dy[4]={1,0,-1,0};

#define MAX 100001
int n,q;
int data[MAX+1];
void add(int i,int v){
  while(i<=n){
    data[i]+=v;
    i+=i&-i;
  }
}
int sum(int i){
  int res=0;
  while(i>0){
    res+=data[i];
    i-=i&-i;
  }
  return res;
}
void input(){
	cin>>n>>q;

	rep(i,q){
		int c,x,y;
		cin>>c>>x>>y;
		if(c){P(sum(y)-sum(x-1));}
		else add(x,y);
	}
}

signed main(){
	cin.tie(0);
	ios::sync_with_stdio(false);
	input();
	return 0;
}