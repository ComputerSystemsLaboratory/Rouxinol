#include <iostream>
using namespace std;

int main(){
    int n; cin >> n;
    int r[n];
    int DELTA_MAX = -1e9;
    int MIN = 1e9;
    for(int i=0;i<n;i++){
        cin >> r[i];
    }
    for(int i=0;i<n-1;i++){
        MIN = min(MIN, r[i]);
        DELTA_MAX = max(r[i+1] - MIN, DELTA_MAX);
    }
    cout << DELTA_MAX << endl;
}
