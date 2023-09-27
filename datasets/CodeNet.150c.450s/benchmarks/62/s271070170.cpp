#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    int a,b,c;
    cin >> a >> b >> c;
    vector<int> test= {a,b,c};
    sort(test.begin(),test.end());
    cout << test[0] << " " << test[1] << " " << test[2] << endl;
    return 0;
}
