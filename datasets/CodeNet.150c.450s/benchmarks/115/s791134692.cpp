#include<iostream>
#include<string>
int main(){
  int q;
  std::cin>>q;
  int i,j,k;
  std::string x,y;
  int a[1001][1001];
  int knum[q];
  for(i=0; i<1001; i++){
    for(j=0; j<1001; j++){
      a[i][j]=0;
    }
  }
  for(k=0; k<q; k++){
    std::cin>>x;
    std::cin>>y;
    for(i=1; i<x.size()+1; i++){
      for(j=1; j<y.size()+1; j++){
	if(x[i-1]==y[j-1]){
	  a[i][j]=a[i-1][j-1]+1;
	}else{
	  if(a[i-1][j]>a[i][j-1]){
	    a[i][j]=a[i-1][j];
	  }else{
	    a[i][j]=a[i][j-1];
	  }
	}
      }	
    }
    knum[k]=a[x.size()][y.size()];
  }
  for(k=0; k<q; k++){
    std::cout<<knum[k]<<"\n";
  }
  return 0;
}
