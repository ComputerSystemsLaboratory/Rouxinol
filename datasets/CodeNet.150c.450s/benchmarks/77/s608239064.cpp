#include <bits/stdc++.h>
#define REP(i,n) for (int i=0;i<(n);i++)
#define ALL(a) (a).begin(),(a).end()
#define RFOR(i,a,b) for (int i=(b)-1;i>=(a);i--)
#define REP(i,n) for (int i=0;i<(n);i++)
#define RREP(i,n) for (int i=(n)-1;i>=0;i--)
#define ll long long
#define ull unsigned long long
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

using namespace std;

int nextInt(){int a;cin>>a;return a;}

int main(){
  int n,m,onum,count;
  char c;
  vector<pair<int,int>> mp;
  vector<int> juel;
  int robx,roby;

  while(cin>>n){
    if(!n)break;
    
    mp.resize(n);
    juel.resize(n,1);
    REP(i,n){
      mp[i].first = nextInt();
      mp[i].second = nextInt();
    }
    cin >> m;
    robx = 10;roby = 10;count = 0;
    REP(i,m){
      cin >> c >> onum;
      REP(j,onum){
	if(c=='N')roby++;
	else if(c=='S')roby--;
	else if(c=='E')robx++;
	else if(c=='W')robx--;
	REP(k,n){
	  if(robx==mp[k].first && roby==mp[k].second){
	    count += juel[k];
	    juel[k]=0;
	  }
	}
      }
    }
    if(count==n)cout << "Yes" << endl;
    else cout << "No" << endl;
    juel.clear();
    mp.clear();
  }
  
  return 0;
}