#include <iostream>
#include <queue>

using namespace std;

struct locate{
  int x;
  int y;
};
 
char graph[20][20];
int cou = 0;
int H,W;

void bfs(locate z){
  queue<locate> Q;
  locate u;
  locate v;
  Q.push(z);
 

  while(!Q.empty()){

    u = Q.front();Q.pop();
    if(u.y < H - 1){
      if(graph[u.y + 1][u.x] == '.' && graph[u.y + 1][u.x] != 'N'){
	graph[u.y + 1][u.x] = 'N';
	cou++;
	v.y = u.y + 1;
	v.x = u.x;
	Q.push(v);
      }
    }
    if(u.x < W - 1){
      if(graph[u.y][u.x + 1] == '.' && graph[u.y][u.x + 1] != 'N'){
	graph[u.y][u.x + 1] = 'N';
	cou++;
	v.x  = u.x + 1;
	v.y = u.y;
	Q.push(v);
      }
    }
    if(u.y > 0){
      if(graph[u.y - 1][u.x] == '.' && graph[u.y - 1][u.x] != 'N'){
	graph[u.y - 1][u.x] = 'N';
	cou++;
	v.x = u.x;
	v.y = u.y - 1;
	Q.push(v);
      }
    }
    if(u.x > 0){
      if(graph[u.y][u.x - 1] == '.' && graph[u.y][u.x - 1] != 'N'){
	graph[u.y][u.x - 1] = 'N';
	cou++;
	v.x = u.x - 1;
	v.y = u.y;
	Q.push(v);
      }
    }

    /* cout << endl;
       for(int i = 0; i< H ;i++){
       for(int j = 0; j < W; j++){
       cout << graph[i][j];
       }
       cout << endl;*/
  }
}
  


int main(){

  int a1,a2;
  locate a;
  while(1){

    cin >> W >> H;

    if(W == 0 && H == 0) break; 


    for(int i = 0; i< H ;i++){
      for(int j = 0; j < W; j++){
	cin >> graph[i][j];
	if(graph[i][j] == '@'){
	  a1 = i;
	  a2 = j;
	}
      }
    }

    /*
      for(int i = 0; i< H ;i++){
      for(int j = 0; j < W; j++){
      cout << graph[i][j];
      }
      cout << endl;
      }
    */

    a.y = a1;
    a.x = a2;
    bfs(a);

    cout << cou+1 << endl;

    cou = 0;
    for(int i = 0;i < H ;i++){
      for(int j = 0;j < W; j++){
	graph[i][j] = 'N';
      }
    }
    cou = 0;
  }
  return 0;
}