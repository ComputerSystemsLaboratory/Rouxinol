#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<queue>
#include<utility>
int dx[4] = {0,1,0,-1};
int dy[4] = {1,0,-1,0};
int gx[8] = {1,1,0,-1,-1,-1,0,1};
int gy[8] = {0,1,1,1,0,-1,-1,-1};
#define REP(i,n) for(int i=0;i<(n);i++)

using namespace std;

int nextInt(){int a;cin>>a;return a;}

int main(){
  int w,h,ct;
  
  queue<pair<int,int>> que;
  while(cin>>h>>w){
    if(!h&&!w)break;
    vector<vector<int>> d(w,vector<int>(h,-1));
    REP(i,w){
      REP(j,h){
	d[i][j] = nextInt();
      }
    }
    ct = 0;
    REP(i,w){
      REP(j,h){
	int def_i = i;
	int def_j = j;
	if(d[def_i][def_j] !=1)continue;
	else ct++;
	  que.push(make_pair(def_i,def_j));
	  while(que.size()){
	    pair<int,int> p = que.front();
	    que.pop();
	    REP(k,8){
	      def_i = gy[k] + p.first;def_j = gx[k] + p.second;
	      if(def_i>=0 && def_i<w && def_j>=0 && def_j<h){
		if(d[def_i][def_j] !=1)continue;
		else {
		  d[def_i][def_j] = -1;
		  que.push(make_pair(def_i,def_j));
		}
	      }
	    }
	  }
      }
    }
    cout << ct << endl;
    
  }
	
	return 0;
}