#include <bits/stdc++.h>

using namespace std;

int main(){
  int a[100],N,c=0;
  cin >> N;
  for(int i = 0 ; i < N ; i++){
    cin >> a[i];
  }
  for(int i = N-1 ; i >= 0 ; i--){
    for(int j = 0 ; j < i ; j++){
      if(a[j] > a[j+1]){
        swap(a[j],a[j+1]);
        c++;
      }
    }
  }
  for(int i = 0 ; i < N ; i++){
    printf("%d%c",a[i],i==N-1?'\n':' ');
  }
  cout << c << endl;
  return 0;
}