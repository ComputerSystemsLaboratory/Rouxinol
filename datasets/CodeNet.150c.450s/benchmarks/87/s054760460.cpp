#include<bits/stdc++.h>
using namespace std;




int main(){
  while(1){


  
  int h;
  cin>>h;
  if(h==0){break;}
  int a[20][10]={};
  for(int i=5;i<h+5;i++){
    for(int t=0;t<5;t++){
      cin>>a[i][t];
    }
  }
  int count=0;
  bool j=true;

  while(j){

    j=false;
 for(int i=5;i<h+5;i++){
    for(int t=0;t<3;t++){
      for(int x=t+1;t<5;x++){
	if(a[i][t]!=a[i][x] || a[i][x]==0){break;}
	if(x-t>=2 && a[i][x+1]!=a[i][x]){
	  j=true;
	  for(int y=t;y<=x;y++){count+=a[i][y]; a[i][y]=0;}
	}
      }
    }
  }

 bool k=true;
 while(k){
   k=false;
 for(int i=h+4;i>=5;i--){
   for(int t=0;t<5;t++){
     if(a[i][t]==0 && a[i-1][t]!=0){k=true; a[i][t]=a[i-1][t]; a[i-1][t]=0;}
   }
 }
 }
 
 
  }

  cout<<count<<endl;




  }
  
  return 0;
}

