#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {

while(1){
  int n, x, counter = 0;

  cin >> n >> x;

  if ( n == 0 && x == 0) break;

  for (int i = 1; i <= n; i++)
    for (int j = i + 1 ; j <= n; j++)
      for (int k = j + 1; k <= n; k++)
        if( i + j + k  == x ) counter += 1;

  cout << counter << endl ;
}
  return 0;
}