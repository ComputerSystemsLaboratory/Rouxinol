#include <iostream>
#include <algorithm>
using namespace std;

int main(){
  int n,a[101],c,minv;
  cin >> n;
  
  for(int i = 0;i < n;i++){
    cin >> a[i];
  }
  
  for(int i = 0;i < n-1;i++){
    minv = i;
    for(int j = i;j < n;j++){
      if(a[j] < a[minv])
        minv = j;
    }
    swap(a[i],a[minv]);
    if(minv != i )
      c++;
  }
  
  for(int i = 0;i < n;i++){
    cout << a[i];
    if(i != n-1)
      cout << " ";
  }cout << endl << c << endl;
  
  return 0;
}