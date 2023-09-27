//Chain Disappearance Puzzle
#include<bits/stdc++.h>
using namespace std;

int n;
int b[10][5];

void print(){
  for(int i=0; i<n; i++){
    for(int j=0; j<5; j++)
      cout<<b[i][j]<<' ';
    cout<<endl;
  }
  cout<<endl;
}

int solve(){
  int ret=0;
  //print();
  for(int i=0; i<n; i++){
    for(int j=0; j<3; j++){
      int p=1;
      while(j+p<5 && b[i][j]!=0 && b[i][j]==b[i][j+p])p++;
      if(p>=3){
        ret+=b[i][j]*p;
        while(p--)b[i][j+p]=0;
      }
    }
  }

  for(int i=n-1; i>=0; i--){
    for(int j=0; j<5; j++){
      if(b[i][j]!=0){
        int p=1;
        while(i+p<n && b[i+p][j]==0){
          swap(b[i+p-1][j], b[i+p][j]);
          p++;
        }
      }
    }
  }

  if(ret==0)return ret;
  else return ret+solve();
}

int main(){
  while(true){
    cin>>n;
    if(n==0)break;
    memset(b, 0, sizeof(b));
    for(int i=0; i<n; i++)
      for(int j=0; j<5; j++)
        cin>>b[i][j];
    cout<<solve()<<endl;
  }
  return 0;
}