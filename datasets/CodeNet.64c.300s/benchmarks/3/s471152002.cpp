#include<iostream>
using namespace std;
#define N 100
int main(){
  int n,a[N],i,b;
  cin >> n;
  for(i=0;i<n;i++)
    cin >> a[i];
  for(i=n-1;i>0;i--)
    cout << a[i] <<" ";
  cout<<a[0];
  cout << endl;
  return 0;
}