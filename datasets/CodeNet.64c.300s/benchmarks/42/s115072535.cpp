#include <iostream>
#include <memory.h>
#include <cstdio>
using namespace std;
int main(){
  int i,n,m,l,x,y,a[21][21];
  char d;
  while(1){
    cin>>n;
    if(!n)
      break;
    memset(a,0,sizeof(a));
    for(i=0;i<n;i++){
      scanf("%d %d",&x,&y);
      a[x][y]=1;
    }
    x=y=10;
    scanf("%d",&m);
    while(m--){
      cin>>d>>l;
      if(d=='N'){
	for(i=0;i<l;i++){
	  y++;
	  if(a[x][y]){
	    a[x][y]=0;
	    n--;
	  }
	}
      }
      else if(d=='E'){
	for(i=0;i<l;i++){
	  x++;
	  if(a[x][y]){
	    a[x][y]=0;
	    n--;
	  }
	}
      }
      else if(d=='S'){
	for(i=0;i<l;i++){
	  y--;
	  if(a[x][y]){
	    a[x][y]=0;
	    n--;
	  }
	}
      }
      else{
	for(i=0;i<l;i++){
	  x--;
	  if(a[x][y]){
	    a[x][y]=0;
	    n--;
	  }
	}
      }
    }
    if(!n)
      puts("Yes");
    else
      puts("No");
  }
  return 0;
}