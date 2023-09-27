#include<bits/stdc++.h>//本当は必要なヘッダファイルだけインクルードするべきです
using namespace std;//本当は個別にusingするか変数や関数ごとにstd::をつけるべきです
//本当は関数内に宣言し明示的に初期化するべきです
int64_t n,m,l,a[100][100],b[100][100],c[100][100],i,j,k;
int main(void){
  cin>>n>>m>>l;
  for(i=0;i<n;i++){
    for(j=0;j<m;j++){
      cin>>a[i][j];
    }
  }
  for(i=0;i<m;i++){
    for(j=0;j<l;j++){
      cin>>b[i][j];
    }
  }
  for(i=0;i<n;i++){
    for(j=0;j<l;j++){
      for(k=0;k<m;k++){
        c[i][j]+=a[i][k]*b[k][j];
      }
    }
  }
  for(i=0;i<n;i++){
    for(j=0;j<l;j++){
      if(j==0)cout<<c[i][j];
      else cout<<" "<<c[i][j];
    }
    cout<<endl;
  }
  return 0;
}

