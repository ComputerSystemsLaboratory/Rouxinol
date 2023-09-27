#include<iostream>
#include<vector>
using namespace std;
int main(){
  int n;
  cin>>n;
  vector< vector<int> > a(n,vector<int> (n));
  for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
      a[i][j]=0;
    }
  }
  for(int i=0; i<n; i++){
    int u,k;
    cin>>u;
    cin>>k;
    vector<int> v(k);
    for(int j=0; j<k; j++){
      cin>>v[j];
    }
    for(int s=0; s<n; s++){
      for(int t=0; t<k; t++){
	if(s==v[t]-1){
	  a[u-1][v[t]-1]=1;
	}
      }
    }
  }

  for(int i=0;i<n; i++){
    for(int j=0; j<n; j++){
      cout<<a[i][j];
      if(j!=n-1){
	cout<<" ";
      }
    }
    cout<<endl;
  }
  return 0;
}
