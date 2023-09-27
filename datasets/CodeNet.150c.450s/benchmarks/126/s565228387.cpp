#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
  int gx,gy;
  while(scanf("%d %d",&gx,&gy)){
    if(gx == 0 && gy == 0)break;
    int chizu[gy+2][gx+2];
    for(int i = 0;i < gy+1;i++)for(int j = 0;j < gx+1;j++)chizu[i][j] = 0;
    chizu[0][1] = 1;
    int n;
    scanf("%d",&n);
    int kx,ky;
    while(n--){
      scanf("%d %d",&kx,&ky);
      chizu[ky][kx] = 1000000;
    }

    chizu[0][1] = 1;
    
    for(int i = 1;i < gy+1;i++){
      for(int j = 1;j < gx+1;j++){
	/*for(int k = 0;k < gy+1;k++){
	  for(int l = 0;l < gx+1;l++){
	    cout << chizu[k][l];
	  }
	  cout << endl;
	  }
	  cout << endl;*/
	if(chizu[i][j] != 1000000){
	  if(chizu[i-1][j] == 1000000 && chizu[i][j-1] == 1000000){
	    chizu[i][j] = 0;
	  }
	  else if(chizu[i-1][j] == 1000000){
	    chizu[i][j] = 0+chizu[i][j-1];
	  }
	  else if(chizu[i][j-1] == 1000000){
	    chizu[i][j] = chizu[i-1][j]+0;
	  }
	  else chizu[i][j] = chizu[i-1][j]+chizu[i][j-1];
	}
      }
    }
    
    cout << chizu[gy][gx] << endl;
  }
}