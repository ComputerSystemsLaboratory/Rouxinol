#include <iostream>
  
using namespace std;  
  
// 入力  
int a, b;  
  
void solve()  
{  
    int res = 0;  
  
    a += b;  
  
    for (; a; a /= 10)  
        res++;  
  
    cout << res << endl;  
}  
  
int main()  
{  
    while (cin >> a >> b)  
        solve();  
  
    return 0;  
} 