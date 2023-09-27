#include<iostream>
using namespace std;
  
typedef long long hyper;
  
hyper fib(int n)
{
    if(n < 2) return 1;
    if(n == 2) return 2;
    if(n == 3) return 3;
    return 3 * fib(n - 2) - fib(n - 4);
}
   
int main()
{
    int n;
    cin >> n;
    cout << fib(n) << endl;
    return 0;
}