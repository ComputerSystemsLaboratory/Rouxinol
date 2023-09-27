#include<iostream>
using namespace std;
int main(){
  long long n,m,l,a[100][100],b[100][100],c[100][100]={0};
  cin>>n>>m>>l;
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      cin >> a[i][j];
    }
  }
  for(int i=0;i<m;i++){
    for(int j=0;j<l;j++){
      cin>>b[i][j];
    }
  }
  for(int d=0;d<n;d++){
    for(int e=0;e<l;e++){
      for(int f=0;f<m;f++){
	c[d][e]+=a[d][f]*b[f][e];

      }
    }
  }
  for(int q=0;q<n;q++){
    for(int w=0;w<l;w++){
      cout<<c[q][w];
      if(w!=l-1)
	cout<<" ";
    }
    cout<<endl;
  }
  return 0;
}