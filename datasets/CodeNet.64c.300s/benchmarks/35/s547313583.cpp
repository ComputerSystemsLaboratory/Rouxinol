#include <iostream>
using namespace std;
int main() {
  int n,p,q,r;
  cin>>n;
  int a[100][100]={};
  for (int i=0;i<n;i++){
    cin>>q>>p;
    if (p!=0){
      for (int j=0;j<p;j++){
	cin>>r;
	a[i][r-1]=1;
      }
    }
  }
  for (int i=0;i<n;i++){
    for (int j=0;j<n;j++){
      cout<<a[i][j];
      if (j!=n-1)cout<<" "; 
    }
    cout<<endl;
  }
  return 0;
}