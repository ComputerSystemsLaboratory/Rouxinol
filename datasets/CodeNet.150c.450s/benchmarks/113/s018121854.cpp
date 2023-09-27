#include <iostream>
using namespace std;

int main()
{
    int i = 1;
    while (true) {
        int x;
        cin >> x;
        if (!x) break;
        cout << "Case " << i << ": " << x << "\n";
        ++i;
    }
}