#include<bits/stdc++.h>//本当は必要なヘッダファイルだけインクルードするべきです
using namespace std;//本当は個別にusingするか変数や関数ごとにstd::をつけるべきです
//本当は関数内に宣言し明示的に初期化するべきです
int n,m,a[100][100],b[100],c[100],i,j;
int main(void){
  cin>>n>>m;
  for(i=0;i<n;i++){
    for(j=0;j<m;j++){
      cin>>a[i][j];
    }
  }
  for(i=0;i<m;i++)cin>>b[i];
  for(i=0;i<n;i++){
    for(j=0;j<m;j++){
      c[i]+=a[i][j]*b[j];
    }
    cout<<c[i]<<endl;
  }
  return 0;
}

