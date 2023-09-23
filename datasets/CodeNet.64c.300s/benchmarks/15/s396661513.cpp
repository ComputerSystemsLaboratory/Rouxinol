#include <iostream>
using namespace std;

int main(){

  int a[110],n;
  cin >> n;
  for(int i = 0; i < n ; i++){
    cin >> a[i];
  }
  int ans = 0;
  for(int i = 0; i < n; i++){
    int min = i;
    for(int j = i; j < n; j++){
      if(a[j] < a[min]) min = j;
    }
    if(i != min){
      int tmp = a[i];
      a[i] = a[min];
      a[min] = tmp;
      ans++;
    }
  }
  for(int i = 0; i < n; i++){
    if(i != n-1) cout << a[i] << " ";
    else cout << a[i] <<endl;
  } 
  cout <<ans<<endl;
  return 0;
}