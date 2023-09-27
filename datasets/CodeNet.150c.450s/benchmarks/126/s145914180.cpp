#include<bits/stdc++.h>
using namespace std;

int dx[2] = {0,1};
int dy[2] = {1,0};
int area[17][17]={0};
int x,y;
int xg,yg;
int ans=0;

int saiki(int a,int b){
  if(a > x || b > y) return 0;
  if(area[a][b] == 2) return 1;
  if(area[a][b] == -1)return 0;
  return saiki(a+1,b) + saiki(a,b+1);
}


int main(){
  while(1){
    int no;
    memset(area,0,sizeof(area));
    ans=0;
    cin >> x >> y;
    if(x == 0 && y == 0)break;
    area[x][y] = 2;
    cin >> no;
    for(int i=0;i<no;i++){
      cin >> xg >> yg;
      area[xg][yg] = -1;
    }
    ans = saiki(1,1);
    cout << ans << endl;
  }
}