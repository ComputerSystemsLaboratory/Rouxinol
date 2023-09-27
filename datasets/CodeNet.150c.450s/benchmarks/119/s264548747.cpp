#include <iostream>
#include <stack>

using namespace std;

struct locate{
  int x;
  int y;
};

int graph[64][64] = {{}};
int flag[64][64] = {{}};
int w,h;

int dfs(locate );


int main(){

  int sum = 0;
  locate in;

  while(1){
  cin >> w >> h ;
  if(w == 0 && h == 0) break;
  for(int i = 0;i < h;i++){
    for(int j = 0;j < w;j++){
      cin >> graph[i][j];
    }
  }
    for(int i = 0;i < h;i++){
      for(int j = 0;j < w;j++){
	if(graph[i][j] == 1 && flag[i][j] == 0){
	  sum++;
	  in.x = j;
	  in.y = i; 
	  if(dfs(in) == -1){
	    sum-= 1;
	  }
	  //	cout << "sum = " << sum << endl;
	}
      }
    }

    cout << sum << endl;
    sum = 0;
    for(int i = 0;i < 64;i++){
      for(int j = 0;j < 64;j++){
	graph[i][j] = 0;
	flag[i][j] = 0;
      }
    }
  }
  return 0;
}



int dfs(locate in){

  stack<locate> S;
  locate u,v,re;
  int  dx,dy,a = 0;

  S.push(in);

  while(!S.empty()){
    v = S.top();S.pop();
    for(dy = -1;dy <= 1;dy++){
      if(v.y + dy < 0 || v.y + dy > 63) continue;
      for(dx = -1;dx <= 1;dx++){
	if(v.x + dx < 0 || v.x + dx > 63 || (dx == 0 && dy == 0)) continue;
	//	cout << "x = " << v.x << "y = " << v.y << endl; 
	if(graph[v.y + dy][v.x + dx] == 1 && flag[v.y + dy][v.x + dx] == 0){
	  // cout << 'a' << endl;
	  flag[v.y + dy][v.x + dx] = 1;
	  re.x = v.x + dx;
	  re.y = v.y + dy;
	  a = 1;
	  dfs(re);
	}
	/*else if(graph[v.y + dy][v.x + dx] == 1 && flag[v.y + dy][v.x + dx] == 1){
	  cout << 'b' << endl;
	  a = 0;
	  return -1;
	  }*/
      }
    }
  }
  return a;
}