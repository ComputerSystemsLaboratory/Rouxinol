#include <iostream>
using namespace std;

int main() {
   int S, a, b, c;
   cin >> S;
   a = S/3600;
   int d = S % 3600;
   b = d/60;
   c = d % 60;
   cout << a << ":" << b << ":" << c << endl;
   return 0;
}