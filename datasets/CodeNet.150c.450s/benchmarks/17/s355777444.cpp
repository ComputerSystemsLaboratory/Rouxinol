#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {
    vector<int> vec(5);
    cin >> vec[0] >> vec[1] >> vec[2] >> vec[3] >> vec[4];
    sort(vec.begin(), vec.end(), greater<int>());
    for(int r = 0; r < 5; r++) {
        cout << vec[r];
        if(r == 4) cout << endl;
        else       cout << " ";
    }
    return(0);
}