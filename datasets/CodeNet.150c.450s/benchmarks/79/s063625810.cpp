#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main(){
  int n;
  int r;
  int a[100];
  int b[100];
  int p;
  int c;
  while(cin >> n >> r){
    if(n == 0 && r == 0){
      break;
    }
    for(int i = 0;i < n;i++){
      a[i] = n-i;
    }
    for(int i = 0;i < r;i++){
      cin >> p >> c;
      for(int j = p-1;j < p+c; j++){
        b[j-p+1] = a[j];//c block
      }
      for(int j = p-2;j >= 0;j--){
        a[j+c] = a[j];
      }
      for(int j = 0;j < c;j++){
        a[j] = b[j];
      }
      //cout << a[0] << a[1] << a[2] << a[3] << a[4] << endl;
    }
  cout << a[0] << endl;
  }
}