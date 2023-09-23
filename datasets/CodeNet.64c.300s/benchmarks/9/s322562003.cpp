#include <iostream>

using namespace std;

int main()
{
        int debt = 100000;
        int n;

        cin >> n;
        for (int i = 0; i < n; i++) {
                debt += debt * 0.05;
                if (debt % 1000 != 0) {
                        debt += (1000 - debt % 1000);
                }
        }
        cout << debt << endl;

        return 0;
}