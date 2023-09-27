#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
using namespace std;

int main(void) {
    int n;
    vector<int> tri(3,0);
    cin >> n;
    for(int i=0; i<n; i++) {
        cin >> tri[0] >> tri[1] >> tri[2];
        sort(tri.begin(),tri.end(),greater<int>());
        if(tri[0]*tri[0] == tri[1]*tri[1] + tri[2]*tri[2]) {
            cout << "YES" << endl;
        }
        else cout << "NO" << endl;
    }
    return 0;
}