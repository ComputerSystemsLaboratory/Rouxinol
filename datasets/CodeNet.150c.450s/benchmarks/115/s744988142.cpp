#include<iostream>
#include<string>
int main()
{
  int n;
  int an[1000];
  int l=0;
  std::cin>>n;
  std::string x;
  std::string y;
  int ans[1001][1001];
  int j,k;
  for(int i=0;i<n;i++){
    std::cin>>x;
    std::cin>>y;
    for(int j=0;j<=1000;j++){
      for(int k=0;k<=1000;k++){
	ans[j][k]=0;
      }
    }
    for(int j=1;j<x.size()+1;j++){
      for(int k=1;k<y.size()+1;k++){
	if(x[j-1]==y[k-1]){
	  ans[j][k]=ans[j-1][k-1]+1;
	}else{
	  if(ans[j][k-1]>ans[j-1][k]){
	    ans[j][k]=ans[j][k-1];
	  }else{
	    ans[j][k]=ans[j-1][k];
	  }
	}
      }
    }
    std::cout<<ans[x.size()][y.size()]<<'\n';  
  }
  return 0;
}

