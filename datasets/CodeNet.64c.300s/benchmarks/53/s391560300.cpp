#include <iostream>
using namespace std;
int main() {
cin.tie(0);
ios::sync_with_stdio(false);
int a, b, c;
cin >> a >> b >> c;
int x = 0;
for (int i = a; i <= b; i++)
if (c % i == 0) x++;
cout << x << "\n";
}