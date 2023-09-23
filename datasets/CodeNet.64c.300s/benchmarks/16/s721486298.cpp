#include <iostream>
#include <algorithm>
#include <cmath>
#include <limits>

using namespace std;
static const int max_value = numeric_limits<int>::min();
static const int min_value = numeric_limits<int>::max();
static const int arr_len = 200000;

int main(){
    int R[arr_len], n;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> R[i];
    }
    int maxv = max_value, minv = min_value;
    for(int i = 0; i < n; i++){
        maxv = max(maxv, R[i]-minv);
        minv = min(minv, R[i]);
    }
    cout << maxv << '\n';
    return 0;

}