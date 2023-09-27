// This file is a "Hello, world!" in C++ language by GCC for wandbox.
#include <iostream>
#include <cstdlib>
#include <vector>
using namespace std;

int main() {
    int n,k;
    cin >> n >> k;
    int max = 0;
    vector<int> a(100005, 0);
    vector<int> s(100005,0);
    while (n != 0 || k != 0) {
        int b;
        s[0] = 0;
        for(int i = 0; i < n; i++) {
            cin >> b;
            s[i+1] = s[i] + b;
        }
        for (int i = 0; i < n-k; i++) {
            if(max < s[i+k] - s[i]) {
                max = s[i+k] - s[i];
            }
        }
        cout << max << endl;
        cin >> n >> k;
    }
}
// GCC reference:
//   https://gcc.gnu.org/

// C++ language references:
//   https://cppreference.com/
//   https://isocpp.org/
//   http://www.open-std.org/jtc1/sc22/wg21/

// Boost libraries references:
//   https://www.boost.org/doc/

