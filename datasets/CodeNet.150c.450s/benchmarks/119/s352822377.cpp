#include<iostream>
#include<queue>
using namespace std;

int main(){
  int w,h;
  int dx[8] = {1,1,0,-1,-1,-1,0,1};
  int dy[8] = {0,1,1,1,0,-1,-1,-1};
  while(true){
  cin>>w>>h;
  if(!w&&!h)break;
  w+=2,h+=2;
  int island[w][h];
  for(int x=0;x<w;x++){
    island[x][0] = 0;
    island[x][h-1] = 0;
  }
  for(int y=1;y<h-1;y++){
    island[0][y] = 0;
    island[w-1][y] = 0;
    for(int x=1;x<w-1;x++){
      cin>>island[x][y];
    }
  }
  int count = 0;
  queue<int> qu;
  for(int y=1;y<h-1;y++){
    for(int x=1;x<w-1;x++){
      if(island[x][y]){
	qu.push(y*w+x);
	while(!qu.empty()){
	  if(island[qu.front()%w][qu.front()/w]){
	    island[qu.front()%w][qu.front()/w] = 0;
	    for(int i=0;i<8;i++)
	      qu.push(qu.front()+dy[i]*w+dx[i]);
	  }
	  qu.pop();
	}
	count++;
      }
    }
  }
  cout<<count<<endl;
  }
  return 0;
}