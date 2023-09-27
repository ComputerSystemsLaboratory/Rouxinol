#include<iostream>
#include<vector>
#include<cstring>
using namespace std;

int pos[21][21];

int main(){
  int n;
  while(cin>>n && n){
    memset(pos,0,sizeof(pos));
    for(int i=0;i<n;i++){
      int x,y;
      cin>>x>>y;
      pos[x][y]=1;
    }
    int m;
    cin>>m;
    int posx=10;
    int posy=10;
    int gem=0;
    for(int i=0;i<m;i++){
      char c;
      int d;
      cin>>c>>d;
      switch(c){
      case 'N':
	for(int j=1;j<=d;j++){
	  if(pos[posx][++posy]){
	    gem++;
	    pos[posx][posy]=0;
	  }
	}
	break;

      case 'E':
	for(int j=1;j<=d;j++){
	  if(pos[++posx][posy]){
	    gem++;
	    pos[posx][posy]=0;
	  }
	}
	break;

      case 'W':
	for(int j=1;j<=d;j++){
	  if(pos[--posx][posy]){
	    gem++;
	    pos[posx][posy]=0;
	  }
	}
	break;

      case 'S':
	for(int j=1;j<=d;j++){
	  if(pos[posx][--posy]){
	    gem++;
	    pos[posx][posy]=0;
	  }
	}
	break;
      }
    }
    if(gem == n)
      cout<<"Yes"<<endl;
    else
      cout<<"No"<<endl;
  }
  return 0;
}