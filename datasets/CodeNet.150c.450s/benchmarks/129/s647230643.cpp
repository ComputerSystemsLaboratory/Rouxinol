#include <iostream>
using namespace std;

int main(){
  int r,c,i,j,temp=0;
  cin>>r>>c;
  int a[r+1][c+1];
  for (i=0;i<r;i++){
    for (j=0;j<c;j++)cin>>a[i][j];
  }
  for (i=0;i<r;i++){
    for (j=0;j<c;j++){
      temp+=a[i][j];
    }
    a[i][c]=temp;
    temp=0;
  }
  for (j=0;j<c+1;j++){
    for (i=0;i<r;i++){
      temp+=a[i][j];
    }
    a[r][j]=temp;
    temp=0;
  }
  for (i=0;i<r+1;i++){
    for (j=0;j<c+1;j++){
      if (j)cout<<' ';
      cout<<a[i][j];
    }
    cout<<endl;
  }
}

