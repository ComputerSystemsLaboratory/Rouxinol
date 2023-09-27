#include<iostream>
using namespace std;
int main(){
  long int a,b;
  int x[200];
  int n = 0;
  while(cin >> a >> b){
    x[n] = 1;
    a = a + b;
    while(1){
      a = a/10;
      if(a >= 1)
        x[n]++;
      else
        break;
    }
    n++;
  }

  for(int i = 0; i < n; i++)
    cout << x[i] << '\n';

  return 0;
}