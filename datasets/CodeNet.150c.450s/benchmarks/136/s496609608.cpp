#include <iostream>
using namespace std;

int get_gcd(int a, int b) {
    if (a % b == 0) return b;
    return get_gcd(b, a % b);
}

int main() {
    int a,b;
    while (cin>>a>>b) {
        if (a < b) {
            int tmp = a;
            a = b;
            b = tmp;
        }

        int gcd = get_gcd(a,b);

        int lcm = a / gcd * b;
        cout << gcd << " " << lcm << endl;

    }
    return 0;
}