#include<iostream>
#include<string>
#include<vector>
#include<utility>
#include<queue>
#include<algorithm>
#include<cmath>
#define INF 2147483647
#define llINF 9223372036854775807
#define pb push_back
#define mp make_pair 
#define F first
#define S second
#define ll long long

using namespace std;
int main(){
  int N;
  //vector<pair<int,int> >ans;
  while(cin>>N,N){
    int Map[N+300][N+300];
    vector<pair<int,int> >pii;
    for(int i=0;i<N+300;i++)
      for(int j=0;j<N+300;j++)
	Map[i][j]=-1;
    Map[(N+300)/2][(N+300)/2]=1;
    pii.pb(mp((N+300)/2,(N+300)/2));
    for(int i=0;i<N-1;i++){
      int n,d;
      cin>>n>>d;
      switch(d){
      case 0:
	Map[pii[n].F][pii[n].S-1]=1;
	pii.pb(mp(pii[n].F,pii[n].S-1));
	break;
      case 1:
	Map[pii[n].F+1][pii[n].S]=1;
	pii.pb(mp(pii[n].F+1,pii[n].S));
	break;
      case 2:
	Map[pii[n].F][pii[n].S+1]=1;
	pii.pb(mp(pii[n].F,pii[n].S+1));
	break;
      case 3:
	Map[pii[n].F-1][pii[n].S]=1;
	pii.pb(mp(pii[n].F-1,pii[n].S));
	break;
      }
    }
    int left=N+INF-10000;
    int right=-1;
    int up=N+INF-10000;
    int down=-1;
    for(int i=0;i<N+300;i++){
      for(int j=0;j<N+300;j++){
	if(Map[i][j]==1){
	  right=max(right,j);
	  left=min(left,j);
	}
	if(Map[j][i]==1){
	  up=min(up,j);
	  down=max(down,j);
	}
      }
    }
    //ans.pb(mp(right-left+1,down-up+1));
    //cout<<right<<" "<<left<<" "<<down<<" "<<up<<endl;
    cout<<right-left+1<<" "<<down-up+1<<endl;
  }
  //for(int i=0;i<ans.size();i++)
  //cout<<ans[i].F<<" "<<ans[i].S<<endl;
  return 0;
}