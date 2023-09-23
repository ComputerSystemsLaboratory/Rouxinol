#include<iostream>
using namespace std;

int c = 0;

void bubblesort(int *a, int n); 

int main(){
  int a[100] = {0};
  int n;
  cin >> n;
  for ( int i = 0; i < n; i++ ) cin >> a[i];
  bubblesort(a, n);
  for ( int i = 0; i < n; i++ ) {
    cout << a[i];
    if (i != n - 1) cout << " ";
  }
  cout << endl;
  cout << c << endl;
  
  return 0;
}

void bubblesort(int *a, int n){
  bool flag = 1;
  int tmp;
  
  while(flag){
    flag = 0;
    for ( int i = n - 1; i > 0; i-- ) { //i--だぞ
      if (a[i] < a[i - 1]) {
        tmp = a[i]; a[i] = a[i - 1]; a[i - 1] = tmp;
        flag = 1;
        c++;
      }
    }
  }
}
