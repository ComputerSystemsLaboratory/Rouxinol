#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
  string from,to;
  cin>>from>>to;
  int f[from.size()+1][to.size()+1];
  for(int i=0;i<from.size()+1;i++){
    for(int j=0;j<to.size()+1;j++){
      f[i][j]=0;
    }
  }
  for(int i=1;i<from.size()+1;i++){
    f[i][0]=i;//f[i-1][0]+1;
  }
  for(int i=1;i<to.size()+1;i++){
    f[0][i]=i;//f[0][i-1]+1;
  }
  for(int i=1;i<from.size()+1;i++){
    for(int j=1;j<to.size()+1;j++){
      if(from[i-1]==to[j-1]){
	//int min1=min(f[i-1][j]+1,f[i][j-1]+1);
	f[i][j]=f[i-1][j-1];
      }else{
	int min1=min(f[i-1][j-1],f[i][j-1]);
	f[i][j]=min(min1,f[i-1][j])+1;
      }
    }
  }

  cout<<f[from.size()][to.size()]<<endl;
  return 0;
}
