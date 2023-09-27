#include<iostream>
#include<string>

using namespace std;

int main(){
  
  int i,j,n,move,m,jewel_x,jewel_y;
  string houkou;
  
  while(1){
    int map[21][21]={0};
    int count=0;
    int x=10,y=10;
    cin >> n;
    if(n==0)break;
    for( i = 0; i < n; i++){
      cin >> jewel_x >> jewel_y;
      map[jewel_x][jewel_y]=1;
    }

      
    cin >> m;
    for(i = 0; i < m; i++){
      cin >> houkou >> move;
      if(houkou=="N"){
	for(j = 0; j < move; j++){
	  y++;
	  if(map[x][y]==1){
	    map[x][y]=0;
	    count++;
	  }
	}
      }
      if(houkou=="S"){
	for(j = 0; j < move; j++){
	  y--;
	  if(map[x][y]==1){
	    map[x][y]=0;
	    count++;
	  }
	}
      }
      if(houkou=="E"){
	for(j = 0; j < move; j++){
	  x++;
	  if(map[x][y]==1){
	    map[x][y]=0;
	    count++;
	  }
	}
      }
      if(houkou=="W"){
	for(j = 0; j < move; j++){
	  x--;
	  if(map[x][y]==1){
	    map[x][y]=0;
	    count++;
	  }
	}
      }
    }
    
    if(n==count){
      cout << "Yes" << endl;
    }else{
      cout << "No" << endl;
    }
    
  }
  return 0;
}