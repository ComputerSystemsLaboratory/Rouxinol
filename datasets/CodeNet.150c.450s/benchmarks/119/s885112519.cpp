#include<iostream>
#include<queue>

using namespace std;

int w,h;
int map[100][100];

void delIsland(int y,int x){

  queue<pair<int,int> > que;
  que.push(make_pair(y,x));


  int next[8][2] = {{0,1},{0,-1},{1,0},{-1,0},{1,1},{1,-1},{-1,1},{-1,-1}};
  while(!que.empty()){
    pair<int,int> now  = que.front();
    que.pop();

    if(now.first<0 || now.first>=h || now.second<0 || now.second>=w || map[now.first][now.second]!=1){
      continue;
    }else{
      map[now.first][now.second] = 0;
    }


    for(int i=0;i<8;i++){
      int ny = now.first + next[i][0];
      int nx = now.second + next[i][1];
      que.push(make_pair(ny,nx));
    }
  }
}

int main(){
  cin>>w>>h;
  while(w!=0 && h!=0){
    for(int i=0;i<h;i++){
      for(int j=0;j<w;j++){
       cin>>map[i][j];
     }
   }

   int ans = 0;
   for(int i=0;i<h;i++){
    for(int j=0;j<w;j++){
     if(map[i][j] == 1){
       ans++;
       delIsland(i,j);
     }
   }
 }

 cout<<ans<<endl;
 cin>>w>>h;
}

return 0;
}