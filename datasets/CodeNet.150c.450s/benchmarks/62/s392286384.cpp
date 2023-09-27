#include <iostream>

using namespace std;
int main(void) {

    int a, b, c;
    cin >> a >> b >> c;
    
    if (a <= b && b <= c)
        cout << a << " " << b << " " << c << endl;
    else if (a <= b && b >= c)
    {
        if (a <= c)
            cout << a << " " << c << " " << b << endl;
        else
            cout << c << " " << a << " " << b << endl;
    } else if (b <= a && a <= c)
        cout << b << " " << a << " " << c << endl;
    else {
        if (b <= c)
            cout << b << " " << c << " " << a << endl;
        else 
            cout << c << " " << b << " " << a << endl;
    }

    return 0;
}

