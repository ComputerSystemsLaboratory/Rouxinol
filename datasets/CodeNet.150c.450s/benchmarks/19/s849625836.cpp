#include <iostream>
using namespace std;
int main() {
cin.tie(0);
ios::sync_with_stdio(false);
int a, b;
while(cin >> a >> b && (a > 0 || b > 0))
if (a < b) cout << a << " " << b << "\n";
else cout << b << " " << a << "\n";
}