#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,m,l;
  cin>>n>>m>>l;
  int matrixA[200][200]={0};
  int matrixB[200][200]={0};
  long long times[200][200]={0};
  for(int i=1;i<=n;i++){
    for(int k=1;k<=m;k++){
      cin>>matrixA[i][k];
    }
  }
  for(int i=1;i<=m;i++){
    for(int k=1;k<=l;k++){
      cin>>matrixB[i][k];
    }
  }
  for(int i=1;i<=n;i++){
    for(int k=1;k<=l;k++){
      for(int s=1;s<=m;s++){
        times[i][k]=times[i][k]+matrixA[i][s]*matrixB[s][k];
      }
    }
  }
  for(int i=1;i<=n;i++){
  for(int k=1;k<=l;k++){
    if(k<l){
      cout<<times[i][k]<<" ";
    }else{
      cout<<times[i][k];
    }
  }
  cout<<endl;
}
return 0;
}

