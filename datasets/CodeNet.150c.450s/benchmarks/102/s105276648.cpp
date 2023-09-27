#include<iostream>
#include<queue>
using namespace std;

int main(){
  int w,h;
  while(cin>>w>>h , w+h){
    char Map[20][20]={0};
    int pos = 0; 
    for(int i=0;i<h;i++){
      for(int j=0;j<w;j++){
	cin>>Map[i][j];
	if(Map[i][j]=='@') pos=i*w+j;
      }
    }
    int cnt=0;
    queue<int> q;
    q.push(pos);
    while(!q.empty()){
      pos = q.front();
      q.pop();
      cnt++;
      int x=pos%w;
      int y=pos/w;
      if(x>=1 && Map[y][x-1]=='.'){
	q.push(y*w+x-1);
	Map[y][x-1]='@';
      }
      if(y>=1 && Map[y-1][x]=='.'){
	q.push((y-1)*w+x);
	Map[y-1][x]='@';
      }
      if(x+1<w && Map[y][x+1]=='.'){
	q.push(y*w+x+1);
	Map[y][x+1]='@';
      }
      if(y+1<h && Map[y+1][x]=='.'){
	q.push((y+1)*w+x);
	Map[y+1][x]='@';
      }
      //      cout<<" x = "<<x<<" y = "<<y<<endl;
    }
    cout<<cnt<<endl;

  }
  return 0;
}