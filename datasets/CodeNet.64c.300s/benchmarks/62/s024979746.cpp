#include <iostream>
using namespace std;

int main(){
  int n,m;
  int a[100][100], b[100];
  int sum;

  cin>>n>>m;

  for(int i=0; i<100; i++){
    for(int j=0; j<100; j++){
      a[i][j]=0;
    }
  }
  for(int i=0; i<100; i++){
    b[i]=0;
  }

  for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){
      cin>>a[i][j];
    }
  }
  for(int j=0; j<m; j++){
    cin>>b[j];
  }

  for(int i=0; i<n; i++){
    sum=0;
    for(int j=0; j<m; j++){
      sum=sum+a[i][j]*b[j];
    }
    cout<<sum<<endl;
  }

  return 0;
}