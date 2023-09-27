#include<bits/stdc++.h>
using namespace std;

int n;
int memo[2001];
int a[21];

void saiki(int i,int now);

int main(){
  int q;
  //初期化
  for(int i=0;i<2001;i++){
    memo[i]=0;
  }
  //入力
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>a[i];
  }

  //全パターン確認
  saiki(0,0);


  cin>>q;
  for(int i=0,x;i<q;i++){
    cin>>x;
    if(memo[x]){
      cout<<"yes"<<endl;
    }
    else{
      cout<<"no"<<endl;
    }
  }
}

void saiki(int i,int now){
  if(i){
    memo[now]=1;
  }
  if(i==n)return;
  saiki(i+1,now+a[i]);
  saiki(i+1,now);
  return;
}
    
  