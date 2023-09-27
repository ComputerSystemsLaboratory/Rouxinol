#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    vector<int> v;
    int n;
    for(int i=0; i<10; i++) {
        cin >> n;
        v.push_back(n);
    }
    sort(v.begin(), v.end());
    cout << v[9] << endl;
    cout << v[8] << endl;
    cout << v[7] << endl;
    
    return 0;
}