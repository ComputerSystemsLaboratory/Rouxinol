#include <cstdio>
#include <iostream>
#include <stack>

using namespace std;
typedef pair<int, int> pii;

#define W_MAX 20
#define H_MAX 20

#define B '.'
#define R '#'
#define M '@'

char map[W_MAX][H_MAX];

int main(){

  while(true){
    int W,H;
    cin >> W >> H;

    if(W==0 && H==0) break;

    pii s; //start

    for(int i=0; i<H; i++){
      getchar();
      for(int j=0; j<W; j++){
	scanf("%c", &map[i][j]);
	if(map[i][j]==M){
	  s = make_pair(i,j);
	  map[i][j] = R;
	}
      }
    }

    stack<pii> st;
    st.push(s);
    int dx[] = {-1,0,0,1}; int dy[] = {0,1,-1,0};
    int ans=0;
    while(!st.empty()){
      pii p = st.top(); st.pop();
      int x = p.first; int y = p.second;
      ans++;
      for(int i=0; i<4; i++){
	int nx = x+dx[i]; int ny = y+dy[i];
	if(nx>=0 && nx<H &&
	   ny>=0 && ny<W &&
	   map[nx][ny]==B){
	  st.push(make_pair(nx,ny));
	  map[nx][ny] = R;
	}
      }
    }

    cout << ans << endl;

  }
}