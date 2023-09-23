#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;
typedef long long ll;

int main(){

  int x, y;
  int a[1000][1000];

  cin>>x>>y;

  for(int i=0; i<x; i++){
    a[i][y]=0;
    for(int j=0; j<y; j++){
      cin>>a[i][j];
      a[i][y]=a[i][y]+a[i][j];
    }
  }

  for(int j=0; j<y; j++){
    a[x][j]=0;
    for(int i=0; i<x; i++){
      a[x][j]=a[x][j]+a[i][j];
    }
  }

  for(int i=0; i<x; i++){
    a[x][y]=0;
    for(int j=0; j<y; j++){
      a[x][y]=a[x][y]+a[x][j];
    }
  }

  for(int i=0; i<x+1; i++){
    for(int j=0; j<y+1; j++){
      cout<<a[i][j];
      if(j!=y){
        cout<<" ";
      }
    }
    cout<<endl;
  }
}