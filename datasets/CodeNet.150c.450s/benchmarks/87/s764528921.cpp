#include<iostream>
#include<map>
#include<vector>
#include<algorithm>
#include<cmath>
#include<climits>
#include<ctime>
#include<cstring>
#include<stack>
#include<queue>
#include<sstream>
#include<string>

#define ALL(v) (v).begin(),(v).end()
#define REP(i,p,n) for(int i=p;i<(int)(n);++i)
#define rep(i,n) REP(i,0,n)
#define DUMP(list) cout << "{ "; for(auto nth : list){ cout << nth << " "; } cout << "}" << endl;


using namespace std;

int MAP[10][5];
int h;
void fall(){
  rep(i,h){
    for(int i=h-1;i>0;i--) rep(j,5){
      if(MAP[i][j]==-1){
        MAP[i][j]=MAP[i-1][j];
        MAP[i-1][j]=-1;
      }
    }
  }
}

int search(int x,int y,int num,int count){
  
  if(x<0||y<0||x>=5) return count;
  if(MAP[y][x]==-1||MAP[y][x]!=num) return count;
  

  int ans = 0;
  count++;
  count = search(x+1,y,num,count);

  if(count>=3) MAP[y][x]=-1;

  return count;
}

int main(){

  while(1){
    cin >> h;

    if(h==0) break;

    int ans=0;
    int p_score=-1;
      memset(MAP,-1,sizeof(MAP));
      rep(i,h) rep(j,5) cin >> MAP[i][j];


      while(1){
        rep(i,h) rep(j,5){
          int point = MAP[i][j];  
          int combo = search(j,i,MAP[i][j],0);
          if(combo>=3){
            //cout << combo << " " << point << endl;
            ans+=combo*point;
          }
        }

        fall();

        if(p_score==ans) break;
        p_score=ans;
      }
    cout << ans << endl;
  }

}