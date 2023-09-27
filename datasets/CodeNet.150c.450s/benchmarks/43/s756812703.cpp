#include <iostream>
using namespace std;
   
int main()
{
  int n;
 
  while (cin >> n, n){
    int a, b, n_a, n_b;
    a = b = 0;

    for (int i = 0; i < n; i++){
      cin >> n_a >> n_b;
      if (n_a == n_b){
        a += n_a;
        b += n_b;
      }
      else if(n_a > n_b){
        a += n_a + n_b;
      }
      else {
        b += n_a + n_b;
      }
    }
                                                                                                                                                                                 
    cout << a << ' ' << b << endl;
  }
}