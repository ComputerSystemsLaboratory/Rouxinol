#include <iostream>
using namespace std;
long long int fact(int x) {
if(x == 1) return 1;
else return x * fact(x-1);
}
  
int main() {
long long int n; cin >> n;
cout << fact(n) << endl;
return 0;
}