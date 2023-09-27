#include<bits/stdc++.h>
using namespace std;

int dx[2] = {0,1};
int dy[2] = {1,0};
int area[17][17]={0};
int x,y;
int xg,yg;
int ans=0;

int saiki(int a,int b){
  for(int i=0;i<2;i++){
    if(a+dx[i] > x || b+dy[i] > y || area[a+dx[i]][b+dy[i]] == -1);
    else if(area[a+dx[i]][b+dy[i]] == 2){
      ans++;
    }
    else{
      saiki(a+dx[i],b+dy[i]);
    }
  }
  return ans;
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