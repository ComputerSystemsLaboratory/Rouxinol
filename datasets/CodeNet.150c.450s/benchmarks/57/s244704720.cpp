#include <iostream>
using namespace std;

int main() {
	int x,y;
    char le;
    while (le != '?'){
        cin >> x >> le >> y;
        if (le == '+')
            cout << x+y <<endl;
        else if (le == '-')
            cout << x-y <<endl;
        else if (le == '*')
            cout << x*y <<endl;
        else if (le == '/')
             cout << x/y <<endl;
    }
	return 0;
}