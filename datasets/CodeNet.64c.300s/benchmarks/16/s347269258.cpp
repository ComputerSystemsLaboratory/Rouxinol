#include<iostream>
#include<algorithm>
using namespace std;

int main(){
  int n;
  cin>>n;
  int *a = new int[n];
  for(int i=0;i<n;i++){
    cin>>a[i];
  }
  int m = (1<<31);
  int minx=a[0];
  for(int i=1;i<n;i++){
    m = max(m,a[i]-minx);
    minx = min(minx,a[i]);

  }
  cout<<m<<endl;
  delete []a;
  return 0;
}