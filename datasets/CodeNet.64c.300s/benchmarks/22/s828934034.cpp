#include<iostream>
#include<algorithm>
using namespace std;
 
int main() {
  int N;
  cin >> N;

  for (int i = 0; i < N; i++) {
    int array[3];
    cin >> array[0] >> array[1] >> array[2];
    sort(array, array+3);
    cout << ((array[0]*array[0]+array[1]*array[1] == array[2]*array[2]) ? "YES" : "NO") << endl;
  }

  return 0;
}