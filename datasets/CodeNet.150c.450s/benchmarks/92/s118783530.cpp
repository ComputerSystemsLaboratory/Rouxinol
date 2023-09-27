#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    vector<int> v1, v2;
    int n, m;
    while(cin) {
        cin >> n >> m;
        v1.push_back(n);
        v2.push_back(m);
    }
    
    for(int i=0; i+1<v1.size(); i++) {
        int count = 0;
        int num = v1[i] + v2[i];
        while(num > 0) {
            num /= 10;
            count++;
        }
        cout << count << endl;
    }
    return 0;
}