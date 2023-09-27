#include<bits/stdc++.h>
#include<queue>
using namespace std;
int W,H;
char c[101][101];
bool visited [100][100];

int dx[4]={1,0,-1,0};
int dy [4]={0,1,0,-1} ;

void compute(){
  memset(visited,false,sizeof visited);


  queue<int> que;
int i,j;
 for(i=0;i<H;++i){
   for(j=0;j<W;++j){
     if(c[i][j]=='@'){
       que.push(j+i*W);
       visited[i][j]=true;
       break;}
       
	 }


   }
 int answer=1;
 
 while(!que.empty()){
   int cur = que.front();
   que.pop();
   int x = cur % W,y=cur/W;

   for(i=0;i<4;i++)
     {int nx = x + dx[i],ny= y+dy[i];
       if(!(0<=nx && nx< W && 0<=ny && ny < H))continue;
       if(c[ny][nx]=='#'||visited[ny][nx])continue;
       
       que.push(nx+ny*W);
       visited[ny][nx]=true;
       ++answer;
       
     }
 }
 cout<<answer<<endl;
 
}





int main(){
  while(cin>>W>>H,W|H) {
    for(int i=0;i<H;++i) {
      cin>>c[i];	    
    }
    compute();
  }
  return 0;
}