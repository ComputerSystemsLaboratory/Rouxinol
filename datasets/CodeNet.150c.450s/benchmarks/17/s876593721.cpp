#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
using namespace std;

int main() {
    int a, b, c, d, e;
    cin >> a >> b >> c >> d >> e;
    vector<int> ary;
    ary.push_back(a);
    ary.push_back(b);
    ary.push_back(c);
    ary.push_back(d);
    ary.push_back(e);
    sort(ary.begin(), ary.end());
    cout << ary[4] << " " << ary[3] << " " << ary[2] << " " << ary[1] << " " << ary[0] << endl;
    return 0;
}