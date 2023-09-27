#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
bool f = 0;
int a,b,n,cnt = 0,m,k = 0;
int x[100],y[100];
int mas[100][100];
int dx[2] = {0,1},dy[2] = {1,0};
void dfs(int x, int y);
int main(){
  while(1){
    cnt = 0;
    cin >> a >> b;
    if(a == 0 && b == 0)break;
    cin >> n;
    m = a * b;
    for(int i = 0; i <= b; i++){
      for(int j = 0; j <= a; j++){
	mas[i][j] = 0;
      }
    }
    for(int i = 0; i < n; i++){
      scanf("%d %d",&x[i],&y[i]);
      mas[y[i]][x[i]] = -1;
      m--;
    }
    dfs(1,1);
    cout << cnt << endl;
  }
}
void dfs(int x, int y){
  if(x == a && y == b){
    cnt++;
    return;
  }
  mas[y][x]++;
  for(int i = 0; i < 2; i++){
    int nx = x + dx[i];
    int ny = y + dy[i];
    if(nx <= a && ny <= b && mas[ny][nx] != -1 && nx > 0 && ny > 0){
      dfs(nx, ny);
    }
  }
}