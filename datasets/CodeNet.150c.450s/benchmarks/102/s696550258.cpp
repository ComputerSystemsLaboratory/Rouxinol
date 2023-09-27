#include<iostream>
#include<queue>


using namespace std;

#define MAX_W 50
#define MAX_H 50

int main(){

  int w,h;
  char tile[MAX_H][MAX_W];

  cin>>w>>h;
  while(w!=0 && h!=0){
    pair<int,int> s;
    for(int i=0;i<h;i++){
      for(int j=0;j<w;j++){
	cin>>tile[i][j];
	if(tile[i][j] == '@'){
	  s = make_pair(i,j);
	}
      }
    }

    int ans = 0;
    queue<pair<int,int> > que;
    que.push(s);
    int next[4][2] = {{0,1},{0,-1},{1,0},{-1,0}};

    while(!que.empty()){
      pair<int,int> now = que.front();
      que.pop();

      if(tile[now.first][now.second] != '#'){
	ans++;
	tile[now.first][now.second] = '#';

	for(int i=0;i<4;i++){
	  int ny = now.first + next[i][0];
	  int nx = now.second + next[i][1];
	  if(ny>=0 && ny<h && nx>=0 && nx<w && tile[ny][nx]!='#'){
	    que.push(make_pair(ny,nx));
	  }
	}
      }
    }

    cout<<ans<<endl;
    cin>>w>>h;
  }

  return 0;
}