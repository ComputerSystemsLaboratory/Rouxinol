#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int N;
    cin >> N;
    
    vector<int> v1, v2, v3;
    for(int i=0; i<N; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        v1.push_back(a);
        v2.push_back(b);
        v3.push_back(c);
    }
    
    for(int i=0; i<N; i++) {
        vector<int> triangle;
        triangle.push_back(v1[i]);
        triangle.push_back(v2[i]);
        triangle.push_back(v3[i]);
        
        sort(triangle.begin(), triangle.end());
        int r = triangle[0], s = triangle[1], t = triangle[2];
        if(t*t == (r*r + s*s)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}