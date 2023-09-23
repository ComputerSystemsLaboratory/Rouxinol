#include<iostream>
using namespace std;

void compare(long int* a, long int* b){
  long int tem;
  if(*a < *b){
    tem = *a;
    *a = *b;
    *b = tem;
  }
}


int main(){
  long int a, b, k;
  long int x[1000][2];
  int n = 0;


  while(cin >> a >> b){
    k = a * b;
    while(1){
      if(a == b)
        break;
      compare(&a, &b);
      a = a - b;
    }
    x[n][0] = a;
    x[n][1] = k / a;
    n++;
  }

  for(int i = 0; i < n; i++)
    cout << x[i][0] << " " << x[i][1] << '\n';

  return 0;
}