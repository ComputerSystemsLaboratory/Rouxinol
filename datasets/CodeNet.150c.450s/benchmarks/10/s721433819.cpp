#include<bits/stdc++.h>
using namespace std;
 
signed main(){
  int a;
  scanf("%d",&a);
  int b[4][3][10]{};
  for(int c=0;c<a;c++){
      int d,e,f,g;
      scanf("%d%d%d%d",&d,&e,&f,&g);
      b[d-1][e-1][f-1]+=g;
      }
      for(int t=0;t<4;t++){
	  for(int x=0;x<3;x++){
	      for(int z=0;z<10;z++){
		  printf(" %d",b[t][x][z]);
		  }
		  printf("\n");
	      }
	      if(t<3){
		  for(int s=0;s<20;s++){
		      printf("#");
		      }
		      printf("\n");
		  }
		  
	  }
}