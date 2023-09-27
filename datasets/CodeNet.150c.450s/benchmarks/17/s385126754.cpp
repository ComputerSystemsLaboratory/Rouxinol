#include <algorithm>
#include <vector>
#include <iostream>
using namespace std;
int main()
{
    vector<int> a(5);
    for (int i = 0; i < 5; ++i) cin >> a[i];
    sort(a.rbegin(), a.rend());
    for (int i = 0; i < 4; ++i) cout << a[i] << ' '; cout << a[4] << endl;
    return 0;
}