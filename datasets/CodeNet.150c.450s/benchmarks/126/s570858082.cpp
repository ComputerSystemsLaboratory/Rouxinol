#include <iostream>
using namespace std;

static const int now = -1;

int ans = 0,a,b,graph[20][20] = {{}};


void bfs(int i,int j){
  graph[j][i] = now;
  if(graph[j][i+1] == 0 && i < a - 1) {
    //cout << 'a' << endl;
    graph[j][i] = 0;
    /*
      for(int v = 0;v < 5;v++){
      for(int s = 0;s < 5 ;s++){
      cout << graph[v][s] << ' ';
      }
      cout << endl;
      }
      cout << endl;
    */
    bfs(i+1,j);
  }
  if(graph[j+1][i] == 0 && j < b - 1){
    graph[j][i] = 0;
    /* cout << 'b' << endl;
       for(int v = 0;v < 5;v++){
       for(int s = 0;s < 5 ;s++){
       cout << graph[v][s] << ' ';
       }
    
       cout << endl;
       }
       cout << endl;
    */
    bfs(i,j+1);
  }
  
  if(graph[b - 1][a - 1] == now) {
    graph[b - 1][a - 1] = 0;
    ans++;
    //cout << "ans =" << ans << endl;  
  }
}

int main(){

  int i,j,x,y,n; 

  while(true){
    
    for(int i = 0;i < 20;i++){
      for(int j = 0;j < 20;j++){
	graph[i][j] = 3;
      }
    }

    cin >> a >> b;
    if(a == 0 && b == 0) break;
    for(int i = 0;i < b;i++){
      for(int j = 0;j < a;j++){
	graph[i][j] = 0;
      }
    }

    cin >> n;
  
    for(int i = 0;i < n;i++){
      cin >> x >> y;
      graph[y - 1][x - 1] = 1;
    }
    /*
      for(int i = 0;i < 5;i++){
      for(int j = 0;j < 5 ;j++){
      cout << graph[i][j] << ' ';
      }
      cout << endl;
      }
    */
  
    bfs(0,0);

    /*cout << endl;
      cout << endl;
      for(int i = 0;i < 5;i++){
      for(int j = 0;j < 5 ;j++){
      cout << graph[i][j] << ' ';
      }
      cout << endl;
      }


    */
    cout << ans << endl;
    ans = 0;
  }
}
  