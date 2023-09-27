#include<iostream>
#include<map>
#include<vector>
#include<algorithm>
#include<cmath>
#include<climits>
#include<ctime>
#include<cstring>
 
#define ALL(v) (v).begin(),(v).end()
#define REP(i,p,n) for(int i=p;i<(int)(n);++i)
#define rep(i,n) REP(i,0,n)
#define DUMP(list) cout << "{ "; for(auto nth : list){ cout << nth << " "; } cout << "}" << endl;
 
using namespace std;
 
 int dx[8] = {1,0,-1,0,1,1,-1,-1};
 int dy[8] = {0,1,0,-1,-1,1,-1,1};

void dfs(vector<vector<int> > &map,int x,int y,int h, int w){
  
    if(x < 0 || x >=w || y < 0 || y >=h){
      return ;
    }

    if(map[y][x]==0){
      return;
    }

    map[y][x] = 0;

    for(int i=0;i<8;i++){
      dfs(map,x+dx[i],y+dy[i],h,w);
    }

    return;
}


int main()
{

  while(true){

    int w,h;
    cin >> w >> h;

    if(w==0&&h==0){
      break;
    }

    vector<vector<int> > map(h,vector<int>(w,0));    
    int count=0;

    for(int i=0;i<h;i++){
      for(int k=0;k<w;k++){
        cin >> map[i][k];
      }
    }


   for(int i=0;i<w;i++){
    for(int k=0;k<h;k++){
      if(map[k][i]==1){
        dfs(map,i,k,h,w);
        count++;
      }
    }
   }
 


    cout << count << endl;

  }

    return 0;
}