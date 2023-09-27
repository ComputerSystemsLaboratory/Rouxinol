#include <iostream>
#include <algorithm>
#include <vector>
#include <functional>
using namespace std;

int main(void) {
    int i,n;
    vector<int> m;
    for(i=0; i<10; i++){
        cin >> n;
        m.push_back(n);
    }
    sort(m.begin(),m.end(),greater<int>());
    for(i=0; i<3; i++) {
        cout << m[i] << endl;
    }
    return 0;
}