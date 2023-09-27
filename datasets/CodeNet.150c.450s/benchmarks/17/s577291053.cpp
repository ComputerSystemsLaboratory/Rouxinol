#include <bits/stdc++.h>
using namespace std;
int main(){
  long long a[5];
  for(int i=0;i<5;i++){
    cin >> a[i];
  }
  sort(a,a+5);
  reverse(a,a+5);
  for(int i=0;i<5;i++){
    if(i>0){
      cout << ' ';
    }
    cout << a[i];
  }
  cout << endl;
  return 0;
}

