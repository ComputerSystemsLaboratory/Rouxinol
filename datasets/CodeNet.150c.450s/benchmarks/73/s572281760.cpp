#include<bits/stdc++.h>
using namespace std;
int A[262144]; //データの2倍の配列の確保が必要
int dfs(int a, int b, int k, int l, int r){
  if(r<=a || b<=l) return 0;
  if(a<=l && r<=b) return A[k];
  int m=(l+r)/2;
  return dfs(a,b,k*2+1,l,m)+dfs(a,b,k*2+2,m,r);
}

int getsum(int a,int b){
  return dfs(a,b,0,0,131072);
}

//配列に値加えていく関数
void update(int i, int x){ 
  i+=(131072-1); //10万を越える表現しやすい数の中で最小
  A[i]+=x;
  while(i){
    i=(i-1)/2;
    A[i]+=x;
  }
}
int n,q;
int com,x,y;

int main(){
  int i;

  cin >> n >> q;

  for(i = 0 ; i < q ; i++){
    cin >> com >> x >> y;
    if(com == 1){
      cout << getsum(x,y+1) << endl;
    }else{
      update(x,y);
    }
  } 

  return 0;
}