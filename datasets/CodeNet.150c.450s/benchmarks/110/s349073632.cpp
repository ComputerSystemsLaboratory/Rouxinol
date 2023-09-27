#include <cstdio>
#include <algorithm>
#include <queue>
#include <vector>
using namespace std;



int main(){
  int h,w,n,ans;
  scanf("%d%d%d",&h,&w,&n);
  
  char tem[h][w];
  int sx, sy;
  for(int i=0;i<h;i++){
    scanf("%s", tem[i]);
  for(int j=0;j<w;j++){
    if('S'==tem[i][j]){sx=i; sy=j;}
  }
  }
  // printf("%d %d\n",sx,sy);
ans=0;
for(int j=1;j<=n;j++){
  // printf("%d %d %d\n",sx,sy,ans);
    queue<int> colx;
    queue<int> coly;
    queue<int> colt;
    queue<int> hx;
    queue<int> hy;
    queue<char> hc;
    colx.push(sx);
    coly.push(sy);
    colt.push(ans);
   // printf("%d %d\n",sx,sy);
  while(1){
    int x, y, time;
    x=colx.front();
    y=coly.front();
    time=colt.front();
    colx.pop();
    coly.pop();
    colt.pop();

    // printf("%d %d?????¢?´¢\n",x,y);
    // printf("%d????????????????????????%d???\n", j, time);

    //???
    if(x!=0){
      if(((int)tem[x-1][y]-48)==j){
sx=x-1;sy=y;ans=time+1;
 while(!hx.empty()){
      tem[hx.front()][hy.front()]=hc.front();
      hx.pop();hy.pop();hc.pop();
}
 break;
}
      else if(tem[x-1][y]!='X'&&tem[x-1][y]!='@'){
        colx.push(x-1);
        coly.push(y);
        colt.push(time+1);
    hx.push(x-1);
    hy.push(y);
    hc.push(tem[x-1][y]);
    tem[x-1][y]='@';
      }
    }
      //???
    if(y!=0){
      if(((int)tem[x][y-1]-48)==j){sx=x;sy=y-1;ans=time+1;  
	while(!hx.empty()){
      tem[hx.front()][hy.front()]=hc.front();
      hx.pop();hy.pop();hc.pop();
} break;}
      else if(tem[x][y-1]!='X'&&tem[x][y-1]!='@'){
        colx.push(x);
        coly.push(y-1);
        colt.push(time+1);
    hx.push(x);
    hy.push(y-1);
    hc.push(tem[x][y-1]);
    tem[x][y-1]='@';
      }
    }
      //???
    if(y!=w-1){
      if(((int)tem[x][y+1]-48)==j){sx=x;sy=y+1;ans=time+1;     
	while(!hx.empty()){
      tem[hx.front()][hy.front()]=hc.front();
      hx.pop();hy.pop();hc.pop();
} break;}
      else if(tem[x][y+1]!='X'&&tem[x][y+1]!='@'){
        colx.push(x);
        coly.push(y+1);
        colt.push(time+1);
    hx.push(x);
    hy.push(y+1);
    hc.push(tem[x][y+1]);
    tem[x][y+1]='@';
      }
    }
      //???
    if(x!=h-1){
      if(((int)tem[x+1][y]-48)==j){sx=x+1;sy=y;ans=time+1;    
	while(!hx.empty()){
      tem[hx.front()][hy.front()]=hc.front();
      hx.pop();hy.pop();hc.pop();
}
 break;
}
      else if(tem[x+1][y]!='X'&&tem[x+1][y]!='@'){
        colx.push(x+1);
        coly.push(y);
        colt.push(time+1);
    hx.push(x+1);
    hy.push(y);
    hc.push(tem[x+1][y]);
    tem[x+1][y]='@';
      }
    }
  }
}

printf("%d\n",ans);

return 0;


}