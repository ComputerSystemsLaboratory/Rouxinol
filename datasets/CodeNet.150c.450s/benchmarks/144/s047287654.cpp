//itp1_topic7_d
#include <bits/stdc++.h>
using namespace std;

int main(){
  int n,m,l,i,j,k;
  int A[100][100],B[100][100];
  long long C[100][100]={};

  cin>>n>>m>>l;
  for(i=0;i<n;i++){
    for(j=0;j<m;j++){
      cin>>A[i][j];
    }
  }
  for(i=0;i<m;i++){
    for(j=0;j<l;j++){
      cin>>B[i][j];
    }
  }

  for(i=0;i<n;i++){
    for(k=0;k<l;k++){
      for(j=0;j<m;j++){
	C[i][k]+=A[i][j]*B[j][k];
      }
    }
  }

  for(i=0;i<n;i++){
    for(j=0;j<l;j++){
      if(j)cout<<" ";
      cout<<C[i][j];
    }
    cout<<endl;
  }

  return 0;
}
