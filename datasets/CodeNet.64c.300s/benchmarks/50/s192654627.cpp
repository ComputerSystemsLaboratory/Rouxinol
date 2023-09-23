#include <iostream>
#include <cstdio>

using namespace std;

int bsort(int a[],int n){
  int count=0;
  for(int i=n-1;0<i;--i)
    for(int j=0;j<i;++j)
      if(a[j+1]<a[j]){
	swap(a[j+1],a[j]);
	count++;
      }
  return count;
}

int main(){
  int n;
  cin >> n;
  int a[n];
  for(int i=0;i<n;++i)
    cin >> a[i];
  int x = bsort(a,n);

  for(int i=0;i<n-1;++i)
    cout << a[i] << " ";
  cout << a[n-1] << endl;
  cout << x << endl;

}