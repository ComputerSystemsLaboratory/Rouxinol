#include <iostream>
using namespace std;

int n = 0, m = 0, k = 0;

int main()
{
cin >> n >> m >> k;

if (n < m && m < k)
cout << "Yes" << endl;
else
cout << "No" << endl;

return 0;
}