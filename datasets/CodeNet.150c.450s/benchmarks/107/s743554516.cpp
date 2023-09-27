#include<iostream>
#include<string>
int main()
{
  std::string x;
  std::string y;
  int ans[1001][1001]={0};
  int i,j;
  int min;

  std::cin>>x;
  std::cin>>y;
  for(i=0;i<=x.size();i++) ans[i][0]=i;
  for(j=0;j<=y.size();j++) ans[0][j]=j;

  for(i=1;i<=x.size();i++){
    for(j=1;j<=y.size();j++){
      if(x[i-1]==y[j-1]){
	min=ans[i-1][j-1];
	if(min>ans[i][j-1]+1){
	  min=ans[i][j-1]+1;
	}
	if(min>ans[i-1][j]+1){
	  min=ans[i-1][j]+1;
	}
	ans[i][j]=min;
      }else{
	min=ans[i-1][j-1]+1;
	if(min>ans[i][j-1]+1){
	  min=ans[i][j-1]+1;
	}
	if(min>ans[i-1][j]+1){
	  min=ans[i-1][j]+1;
	}
	ans[i][j]=min;
      }
    }
  }
  std::cout<<ans[x.size()][y.size()]<<'\n';  
  return 0;
}

