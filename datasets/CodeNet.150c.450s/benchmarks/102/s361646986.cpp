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
 
 int dx[4] = {1,0,-1,0};
 int dy[4] = {0,1,0,-1};

void dfs(vector<string> &map,vector<vector<bool> > &move,int x,int y,int h, int w){
  
    if(x < 0 || x >=w || y < 0 || y >=h){
      return ;
    }

    if(map[y][x] == '#'){
      return;
    }

    if(move[y][x]){
      return;
    }

    move[y][x] = true;

    for(int i=0;i<4;i++){
      dfs(map,move,x+dx[i],y+dy[i],h,w);
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

    vector<string> map(h);    
    vector<vector<bool> > move(h,vector<bool>(w,false));
    int x=0,y=0;
    int count=0;

    for(int i=0;i<h;i++){
      cin >> map[i];
      //cout << map[i] << endl;
    }

    for(int i=0;i<w;i++){
      for(int k=0;k<h;k++){
        if(map[k][i]=='@'){
          x=i;
          y=k;
       
        //  cout << w << "," << h << endl;
        // cout << x << "," << y << endl; 
        }
        
     }
    
    }


    dfs(map,move,x,y,h,w);

   for(int i=0;i<w;i++){
    for(int k=0;k<h;k++){
      if(move[k][i]){
        count++;
      }
    }
   }
  
    cout << count << endl;

  }

    return 0;
}