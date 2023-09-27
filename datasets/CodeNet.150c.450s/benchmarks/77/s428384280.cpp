#include <iostream>
using namespace std;

int main(){
  int stc,cmdc,rx,ry,tx,ty;
  char tc;
  int stloc[21][21];
  int gstc;

  while (1){
    cin >> stc;
    if (stc==0) break;
    
    for (int i=0;i<21;i++)
      for (int j=0;j<21;j++)
      stloc[i][j]=0;
    rx=ry=10;
    gstc=0;    

    for (int i=0;i<stc;i++){
      cin >> tx >> ty;
      stloc[tx][ty]=1;
    }
    
    cin >> cmdc;
    
    for (int i=0;i<cmdc;i++){
      cin >> tc >> tx;
      if (tc == 'E'){
	for (int j=rx+1;j<=rx+tx;j++){
	  gstc += stloc[j][ry];
	  stloc[j][ry]=0;
	}
	rx+=tx;
      }else if (tc == 'N'){
	for (int j=ry+1;j<=ry+tx;j++){
	  gstc += stloc[rx][j];
	  stloc[rx][j]=0;
	}
	ry+=tx;
      }else if (tc == 'W'){
	for (int j=rx-1;j>=rx-tx;j--){
	  gstc += stloc[j][ry];
	  stloc[j][ry]=0;
	}
	rx-=tx;
      }else if (tc == 'S'){
	for (int j=ry-1;j>=ry-tx;j--){
	  gstc += stloc[rx][j];
	  stloc[rx][j]=0;
	}
	ry-=tx;
      }
    }
   
    if (gstc == stc) cout << "Yes" <<endl;
    else cout << "No" << endl;

  }
  return 0;
}