#include <iostream>
#include <cstdio>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;

bool isRightTriangle(int a, int b, int c) {
    return(a*a + b*b == c*c);
}

int main(void) {
    int num; cin >> num;
    vector<int> vec(3);
    for(int r = 0; r < num; r++) {
        cin >> vec[0] >> vec[1] >> vec[2];
        sort(vec.begin(), vec.end());
        cout << (isRightTriangle(vec[0], vec[1], vec[2]) ? "YES" : "NO") << endl;
    }
    return(0);
}