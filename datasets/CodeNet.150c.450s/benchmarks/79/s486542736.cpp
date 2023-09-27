#include<iostream>
using namespace std;
int main(){
  int a[51]={};
  int st[51]={};
  int n,r;
  int p,c;
  while(1){
    //in
    cin >> n >> r;
    if(n==0&&r==0)break;
    for(int i=0;i<n;i++){
      a[i]=n-i;
    }
    for(int i=0;i<r;i++){
      cin >> p >>c; 
      for(int j=0;j<n;j++){
	st[j]=a[j];
      }
      for(int j=0;j<c;j++){
	a[j]=st[p+j-1];
      }
      for(int j=0;j<p-1;j++){
	a[j+c]=st[j];
      }
    }
    cout << a[0] << endl;
  }
  return 0;
}