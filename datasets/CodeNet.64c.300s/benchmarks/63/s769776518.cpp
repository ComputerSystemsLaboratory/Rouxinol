#include <algorithm>
#include <iostream>
using namespace std;
 
int main() {
    long long int a, b;
    while (cin >> a >> b) {
    cout << a * b /(a/__gcd(a,b)*b)<< " " <<a/__gcd(a,b)*b<< endl;
  }
}