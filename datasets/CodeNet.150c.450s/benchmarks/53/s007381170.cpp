#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int a;
    cin >> a;

    cout << a << ":";

    vector<int> r;
    int j = 2;
    while (true) {
        if (a == 1) {
            break;
        }
        if (a % j == 0) {
            r.push_back(j);
            a /= j;
        }
        else {
            j += 1;
        }
        if (j *j > a) {
            r.push_back(a);
            break;
        }
    }
    for (int i : r) {
        cout << ' ' << i;
    }
    cout << endl;
}