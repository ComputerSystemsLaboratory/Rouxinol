#include<iostream>
using namespace std;

int n;
int k;


int main(){
  int num;
  cin>>n;
  int adj[n][n];
  int rin;
  int i=0,j=0;
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      adj[i][j]=0;
    }
  }
  for(i=0;i<n;i++){
    cin>>num>>k;
    num--;
    for(j=0;j<k;j++){
      cin>>rin;
      rin--;
      adj[num][rin]=1;
    }
  }
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      if(j)cout<<" ";
      cout<<adj[i][j];
    }
    cout<<endl;
  }
  return 0;
}

