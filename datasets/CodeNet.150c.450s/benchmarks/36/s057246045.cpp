#include <iostream>
using namespace std;

#define f(x) ((x) * (x))

int main()
{
  int d;
  while(cin >> d){
    int ans = 0;
    for(int i = 1; i < 600 / d; i++){
      ans += d * f(i * d);
    }
    cout << ans << endl; 
  }
}