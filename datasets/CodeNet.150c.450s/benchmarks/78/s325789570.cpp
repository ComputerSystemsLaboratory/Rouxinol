#include<iostream>
#include<algorithm>
using namespace std;
#define MAX 1000000
int main(){
  int a[MAX + 1],b[MAX + 1];
  a[0] = b[0] = 0;
  for(int i = 1; i < MAX + 1; i++){
    a[i] = b[i] = i;
    for(int j = 1;  ; j++ ){
      int java = j * (j + 1) * (j + 2) / 6;
      if(i - java < 0) break;
      a[i] = min( a[i], a[i - java] + 1);
      if(java & 1) b[i] = min( b[i], b[i - java] + 1);
    }
  }
  int n;
  while(cin >> n, n){
    cout << a[n] << " " << b[n] << endl;
  }
}