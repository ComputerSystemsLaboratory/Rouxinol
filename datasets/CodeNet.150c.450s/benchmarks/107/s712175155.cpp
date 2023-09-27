#include<iostream>
#include<string>
int main(){

  int i,j;
  std::string x,y;
  int a[1001][1001];
  int knum;
  for(i=0; i<1001; i++){
    for(j=0; j<1001; j++){
      if(j==0)a[i][j]=i;
      else if(i==0)a[i][j]=j;
      else a[i][j]=0;
    }
  }
  std::cin>>x;
  std::cin>>y;
  int vx,vy,vz;
  for(i=1; i<x.size()+1; i++){
    for(j=1; j<y.size()+1; j++){
      vx=a[i-1][j]+1;
      vy=a[i][j-1]+1;
      vz=a[i-1][j-1];
      if(x[i-1]==y[j-1]){
	if(vx<=vy && vx<=vz){
	  a[i][j]=vx;
	}else if(vy<=vx && vy<=vz){
	  a[i][j]=vy;
	}else{
	  a[i][j]=vz;
	}
      }else{
	if(vx<=vy && vx<=vz+1){
	  a[i][j]=vx;
	}else if(vy<=vx && vy<=vz+1){
	  a[i][j]=vy;
	}else{
	  a[i][j]=vz+1;
	}
      }
    }
    knum=a[x.size()][y.size()];
  }
  std::cout<<knum<<"\n";
  return 0;
}

