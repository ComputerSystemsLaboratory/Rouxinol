#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int a, b, c;
    for (int i = 0; i < n; ++i) {
        cin >> a >> b >> c;
        a *= a;
        b *= b;
        c *= c;
        if (a + b == c || b + c == a || c + a == b)
            cout << "YES";
        else 
            cout << "NO";
        cout << endl;
    }
    return 0;
}