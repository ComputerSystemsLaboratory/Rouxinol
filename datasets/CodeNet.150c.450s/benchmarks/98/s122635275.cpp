#include<iostream>
#include<cmath>
using namespace std;

int main(){
  
  int n, m, st[110], sh[110], sumt, sumh;

  while(cin>>n>>m, n){
    sumt=0;
    for(int i=0;i<n;i++){
      cin>>st[i];
      sumt+=st[i];
    }
    sumh=0;
    for(int i=0;i<m;i++){
      cin>>sh[i];
      sumh+=sh[i];
    }
    bool f=true;
    for(int i=0;i<n;i++){
      for(int j=0;j<m;j++){
	if(sumt-st[i]+sh[j]==sumh-sh[j]+st[i]){
	  cout<<st[i]<<" "<<sh[j]<<endl;
	  f=false;
	  break;
	}
      }
      if(!f) break;
    }
    if(f) cout<<-1<<endl; 
  }
  
  return 0;
}