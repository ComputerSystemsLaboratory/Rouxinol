#include<bits/stdc++.h>//本当は必要なヘッダファイルだけインクルードするべきです
using namespace std;//本当は個別にusingするか変数や関数ごとにstd::をつけるべきです
//本当は関数内に宣言し明示的に初期化するべきです
int r,c,d[101][101],sum,i,j,all;
int main(void){
  cin>>r>>c;
  for(i=0;i<r;i++){
    sum=0;
    for(j=0;j<c;j++){
      cin>>d[i][j];
      sum+=d[i][j];
    }
    d[i][c]=sum;
    all+=sum;
  }
  d[r][c]=all;
  for(j=0;j<c;j++){
    sum=0;
    for(i=0;i<r;i++){
      sum+=d[i][j];
    }
    d[r][j]=sum;
  }
  for(i=0;i<r+1;i++){
    for(j=0;j<c+1;j++){
      if(j==0)cout<<d[i][j];
      else cout<<" "<<d[i][j];
    }
    cout<<endl;
  }
  return 0;
}

