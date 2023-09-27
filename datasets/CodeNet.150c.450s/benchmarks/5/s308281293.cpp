#include <iostream>

using namespace std;

int main() {
  int n;
  int numbers[100];
  cin >> n;
  for(int i=0; i < n; ++i){
    cin >> numbers[i];
  }
  for(int i=0; i < n; ++i){
    if(i)cout << " ";
    cout << numbers[n-1-i];
  }
  cout << endl;
  return 0;
}
