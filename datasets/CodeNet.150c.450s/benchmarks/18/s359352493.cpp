#include <iostream>
using namespace std;
int main(){int n,x;x = 100000;cin >> n;for (int i=0;i<n;i++) 
{x = 1.05*x;if (x%1000!=0) 
{x = x +(1000-x%1000);}}cout << x << endl;return 0;}