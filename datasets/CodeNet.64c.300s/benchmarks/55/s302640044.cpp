#include <iostream>
using namespace std;

int main()
{
    int x = -1;
    int i = 1;

    while (true) {
        cin >> x;

        if (x != 0) {
            cout << "Case " << i << ": " << x << endl;
        } else {
            return 0;
        }

        i++;
    }
}