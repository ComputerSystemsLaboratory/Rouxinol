#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
  int n,a[100];
  int max=0;
  cin >> n;
  for(int i=0;i<n;i++){
    cin >> a[i];
    if(i!=n){
      swap(a[0],a[i]);
    }
  }
  
  for(int m=1;m<n;m++){
    for(int j=m+1;j<n;j++){
      swap(a[j],a[m]);
    }
  }
  
  for(int k=0;k<n;k++){
    cout << a[k];
    if (k<n-1){
      cout << " ";
    }
  }
  cout << endl;
  return 0;
}