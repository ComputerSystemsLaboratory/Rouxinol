#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<queue>
#include<utility>
int dx[4] = {0,1,0,-1};
int dy[4] = {1,0,-1,0};

using namespace std;

int main(){
  int w,h;
  vector<string> s;
  queue<pair<int,int>> que;
  vector<vector<int>> d;
  int defi,defj;
  while(cin>>w&&cin>>h){
    if(!w&&!h)break;
    s.resize(h);
    d.resize(h);
    for(int i=0;i<h;i++)
      d[i].resize(w,0);
    for(int i=0;i<h;i++){
      cin >> s[i];
      for(int j=0;j<w;j++)
	if(s[i][j] == '@'){defi=i;defj=j;}
    }
    
    que.push(make_pair(defi,defj));
    int ct=1;//???????????????
    while(que.size()){
      pair<int,int> defp = que.front();
      que.pop();
      pair<int,int> p;
      for(int i=0;i<4;i++){
	p.first = defp.first + dy[i];p.second = defp.second + dx[i];
	if(p.first>=0 && p.second>=0 && p.first<h && p.second<w){
	  if(d[p.first][p.second])continue;
	  else if(s[p.first][p.second] == '.'){
	    ct++;
	    d[p.first][p.second]++;
	    que.push(p);
	  }else if(s[p.first][p.second] == '#'){
	    d[p.first][p.second]++;
	  }
	}
      }
    }
    cout << ct << endl;
    s.clear();
    d.clear();
  }
  return 0;
}