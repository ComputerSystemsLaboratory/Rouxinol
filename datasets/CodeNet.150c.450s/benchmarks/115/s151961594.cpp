#include<iostream>
#include<vector>

using namespace std;

int main()
{
  int n;
  string a,b;
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>a>>b;
    int f[a.size()+1][b.size()+1];
    for(int i=0;i<a.size()+1;i++){
      for(int j=0;j<b.size()+1;j++){
	f[i][j]=0;
      }
    }

    for(int j=1;j<a.size()+1;j++){
      for(int k=1;k<b.size()+1;k++){
	if(a[j-1]==b[k-1]){
	  f[j][k]=f[j-1][k-1]+1;
	}else{
	  f[j][k]=max(f[j-1][k],f[j][k-1]);
	}
      }
    }
    /*
    for(int j=0;j<b.size()+1;j++){
      for(int i=0;i<a.size()+1;i++){
	cout<<f[j][i]<<" ";
      }
      cout<<endl;
    }
    */
    cout<<f[a.size()][b.size()]<<endl;
  }
  return 0;
}

