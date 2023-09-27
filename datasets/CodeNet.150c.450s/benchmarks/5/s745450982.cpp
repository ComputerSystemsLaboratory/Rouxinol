#include <iostream>
using namespace std;
int main(){
  int n;
  int a[1000];
  cin >> n;
  for(int i= 0;i < n;i++){
    cin >> a[i];
  }
  for(int i = 0;i < n/2;i++){
    int c = a[i];
    a[i] = a[n-i-1];
    a[n-i-1] = c;
  }
  for(int i = 0;i < n;i++){
    cout << a[i];
    if(i != n-1){
      cout << " ";
    }   
  }
  cout << endl;
}