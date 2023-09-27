#include <iostream>
using namespace std;

int main()
{
    string x;

    while (true) {
        cin >> x;

        if (x[0] == '0') {
            return 0;
        }

        int sum = 0;

        for (int i = 0; i < (int)x.size(); i++) {
            sum += (int)x[i] - '0';
        }

        cout << sum << endl;
    }
}