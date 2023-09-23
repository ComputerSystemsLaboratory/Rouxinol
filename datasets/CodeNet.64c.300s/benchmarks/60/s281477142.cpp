#include<iostream>
#include<cstdio>
using namespace std;

int main(){
  int i,j,h,w,n,x,y;
 
  while(cin>>w>>h,h!=0,w!=0){
    int r[21][21]={0};
    r[1][1]=1;

    cin>>n;

    for(i=0;i<n;i++){
      cin>>x>>y;
      r[y][x]=-1;
    }
    for(i=1;i<=h;i++){
      for(j=1;j<=w;j++){
	if(r[i][j]!=-1){
	  if(i!=1&&r[i-1][j]!=-1){
	    r[i][j]+=r[i-1][j];
	  }
	  if(j!=1&&r[i][j-1]!=-1){
	    r[i][j]+=r[i][j-1];
	  }
	}
      }
    }

    /*   for(i=1;i<=h;i++){
      for(j=1;j<=w;j++){
	//	cout<<"# "<<r[i][j];
	printf("| %3d ",r[i][j]);
      }
      cout<<endl;
    }
    */
    cout<<r[h][w]<<endl;
  }
  return 0;
}