#include <bits/stdc++.h>
using namespace std;

int used[23][23];
int answer;
int h,w;
string s[23];

void dfs(int y,int x){
  answer++;
  used[y][x] = 1;
  
  if( y-1 >= 0 && used[y-1][x]==0 && s[y-1][x]!='#') dfs( y-1,x );
  
  if( y+1 <  h && used[y+1][x]==0 && s[y+1][x]!='#') dfs( y+1,x );
  
  if( x-1 >= 0 && used[y][x-1]==0 && s[y][x-1]!='#') dfs( y,x-1 );
  
  if( x+1 <  w && used[y][x+1]==0 && s[y][x+1]!='#') dfs( y,x+1 );
}

int main(){
  
  while( cin>>w>>h,w){
    
    int y,x;

    answer = 0;
    
    memset( used,0,sizeof(used) );
    for(int i=0;i<h;i++) cin>>s[i];
    
    for(int i=0;i<h;i++){
      for(int j=0;j<w;j++){
	if(s[i][j]=='@'){
	  y = i;
	  x = j;
	}
      }
    }    
    dfs(y,x);
    cout<< answer <<endl;
  }
}

