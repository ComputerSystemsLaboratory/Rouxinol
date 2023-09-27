#include<iostream>
using namespace std;

int main(){
  int a, b, n;
  int suma = 0;
  int sumb = 0;
  while(1){
    cin >> n;
    if(n == 0) break;
    for(int i = 0; i < n; i++){
      cin >> a >> b;
      if(a > b) suma += a + b;
      else if(a < b) sumb += a + b;
      else if(a == b){
        suma += a;
        sumb += b;
      }
    }
    cout << suma << " " << sumb << endl;
    suma = 0;
    sumb = 0;
  }
  return 0;
}