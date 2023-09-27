#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int x[3];
    cin >> x[0] >> x[1] >> x[2];
    sort(begin(x), end(x));
    cout << x[0] << " ";
    cout << x[1] << " ";
    cout << x[2] << "\n";
}