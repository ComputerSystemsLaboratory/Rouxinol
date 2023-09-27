#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    int a,b,c;
    cin >> a >> b >> c;
    vector<int> test;
    test.push_back(a);
    test.push_back(b);
    test.push_back(c);
    sort(test.begin(),test.end());
    cout << test[0] << " " << test[1] << " " << test[2] << endl;
    return 0;
}
