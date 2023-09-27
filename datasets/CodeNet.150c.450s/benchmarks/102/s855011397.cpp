#include<iostream>
#include<queue>
using namespace std;
int main(){
  while(1){
    int w,h,s,dx[4]={0,1,0,-1},dy[4]={1,0,-1,0},an=1;
    string mp[20];
    queue<int> t;
    cin>>w>>h;
    if(w==0)break;
    for(int i=0;i<h;i++){
      cin>>mp[i];
      for(int j=0;j<w;j++)if(mp[i][j]=='@')s=w*i+j;
    }
    t.push(s);
    while(!t.empty()){
      s=t.front();
      int x=s%w,y=s/w;
      t.pop();
      for(int i=0;i<4;i++){
	int x1=x+dx[i],y1=y+dy[i];
	if(0<=x1&&x1<w&&0<=y1&&y1<h){
	  if(mp[y1][x1]=='.'){
	    t.push(w*y1+x1);
	    mp[y1][x1]='#';
	    an++;
	  }
	}
      }
    }
    cout<<an<<endl;
  }
  return 0;
}