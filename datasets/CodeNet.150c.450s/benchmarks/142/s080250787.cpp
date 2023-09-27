#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    vector<int> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int i = k; i < n; i++) {
        cout << ((a[i - k] < a[i]) ? "Yes" : "No") << endl;
    }

    return 0;
}
