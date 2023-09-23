#include <iostream>
  
using namespace std;
  
typedef unsigned long long ull;
  
int main()
{
    ull t[45] = { 1, 1 };
    for( int i=2; i<45; ++i )
        t[i] = t[i-1] + t[i-2];
    ull n;
    cin >> n;
    cout << t[n] << endl;
}