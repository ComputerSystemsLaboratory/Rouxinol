#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    string a;
    int n, c;
    while (cin >> a && a != "-") {
        cin >> n;
        for (int i = 0; i < n; ++i) {
            cin >> c;
            for(int j = 0; j < c; ++j) {
                a.push_back(*a.begin());
                a.erase(a.begin());
            }
        }
        cout << a << endl;
    }

    return 0;
}




