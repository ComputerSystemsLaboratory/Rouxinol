#include <iostream>
#include <algorithm>

using namespace std;

int main(){
  int n;
  
  while(1){
    cin >> n;
    if(n == 0) break;

    int a[n];
    for(int i = 0 ; i < n ; i++){
      cin >> a[i];
    }
    
    sort(a, a+n);
    int sa, min = 1000000;
    for(int i = 0 ; i < n - 1 ; i++){
      sa = (a[i+1] - a[i]);
      if(min > sa) min = sa;
    }
    cout << min << endl;
  }
}