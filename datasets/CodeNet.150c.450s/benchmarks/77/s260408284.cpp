#include<bits/stdc++.h>
using namespace std;

int main(){
  int n,m;
  bool jems[30][30];
  bool gred[30][30];
  while(cin>>n,n){
    memset(jems,0,sizeof(jems));
    memset(gred,0,sizeof(gred));
    int x,y;
    for(int i=0;i<n;i++){
      cin>>x>>y;
      jems[y][x]=true;
    }
    cin>>m;
    gred[10][10]=true; 
    x=y=10;
    for(int i=0;i<m;i++){
      char dire;
      int dist;
      cin>>dire>>dist;
      for(int j=0;j<dist;j++){
	if(dire=='N'){
	  gred[++y][x]=true;
	}else if(dire=='S'){
	  gred[--y][x]=true;
	}else if(dire=='W'){
	  gred[y][--x]=true;
	}else{
	  gred[y][++x]=true;
	}
      }
    }
    bool ans=true;
    for(int i=0;i<30;i++){
      for(int j=0;j<30;j++){
	//cout << jems[i][j];
	//cout << gred[i][j];
	if(jems[i][j]==false)continue;
	if(jems[i][j]==true && gred[i][j]==false)ans=false;
      }
      //cout << endl;
    }
    if(ans==true){
      cout << "Yes" << endl;
    }else{
      cout << "No" << endl;
    }
  }
  return 0;
}