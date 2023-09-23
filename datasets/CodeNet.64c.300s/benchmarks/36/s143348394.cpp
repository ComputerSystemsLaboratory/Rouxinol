#include <iostream>
#include <algorithm>
using namespace std;

int main(void) {
    int d[3];
    for (int i = 0; i < 3; i++) cin >> d[i];
    sort(d, d + 3);
    cout << d[0] << ' ' << d[1] << ' ' << d[2] << endl;
    return 0;
}