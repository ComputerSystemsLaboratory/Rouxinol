#include <iostream>
#include <vector>
#include <functional>
#include <algorithm>
using namespace std;

typedef long long ll;

int main()
{
    int n;
    while(cin >> n && n) {
        int a = 0, b = 0, c, d;
        for(int i = 0; i < n; i++) {
            cin >> c >> d;
            if(c > d) {
                a += (c + d);
            } else if(c == d) {
                a += c;
                b += d;
            } else {
                b += (c + d);
            }
        }
        cout << a << " " << b << endl;
    }
}