#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> a(6);

    int i,j,k,n;

    for (k = 0; k <= 5; ++k) {
        cin >> a.at(k);
    }

    cin >> n;

        for (k = 1; k <= n; ++k) {

            cin >> i >> j;

            if (i == a.at(0) && j == a.at(1)) { cout << a.at(2) << endl; }
            else if (i == a.at(0) && j == a.at(2)) { cout << a.at(4) << endl; }
            else if (i == a.at(0) && j == a.at(3)) { cout << a.at(1) << endl; }
            else if (i == a.at(0) && j == a.at(4)) { cout << a.at(3) << endl; }
            else if (i == a.at(1) && j == a.at(0)) { cout << a.at(3) << endl; }
            else if (i == a.at(1) && j == a.at(2)) { cout << a.at(0) << endl; }
            else if (i == a.at(1) && j == a.at(3)) { cout << a.at(5) << endl; }
            else if (i == a.at(1) && j == a.at(5)) { cout << a.at(2) << endl; }
            else if (i == a.at(2) && j == a.at(0)) { cout << a.at(1) << endl; }
            else if (i == a.at(2) && j == a.at(1)) { cout << a.at(5) << endl; }
            else if (i == a.at(2) && j == a.at(4)) { cout << a.at(0) << endl; }
            else if (i == a.at(2) && j == a.at(5)) { cout << a.at(4) << endl; }
            else if (i == a.at(3) && j == a.at(0)) { cout << a.at(4) << endl; }
            else if (i == a.at(3) && j == a.at(1)) { cout << a.at(0) << endl; }
            else if (i == a.at(3) && j == a.at(4)) { cout << a.at(5) << endl; }
            else if (i == a.at(3) && j == a.at(5)) { cout << a.at(1) << endl; }
            else if (i == a.at(4) && j == a.at(0)) { cout << a.at(2) << endl; }
            else if (i == a.at(4) && j == a.at(2)) { cout << a.at(5) << endl; }
            else if (i == a.at(4) && j == a.at(3)) { cout << a.at(0) << endl; }
            else if (i == a.at(4) && j == a.at(5)) { cout << a.at(3) << endl; }
            else if (i == a.at(5) && j == a.at(1)) { cout << a.at(3) << endl; }
            else if (i == a.at(5) && j == a.at(2)) { cout << a.at(1) << endl; }
            else if (i == a.at(5) && j == a.at(3)) { cout << a.at(4) << endl; }
            else if (i == a.at(5) && j == a.at(4)) { cout << a.at(2) << endl; }
        }
}
