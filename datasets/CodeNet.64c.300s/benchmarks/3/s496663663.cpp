#include<iostream>
using namespace std;

int main(){
  int n;
  cin >> n;
  int a[n];

  for (int i = 0; i < n; i++){
    int b;
    cin >> b;
    a[i] = b;
  }

  for (int i = n-1; i >= 0; i--){

    if (i != n-1) cout << " ";
    cout << a[i];
  }

  cout << endl;


return 0;
}