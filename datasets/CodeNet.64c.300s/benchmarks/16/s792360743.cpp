#include <iostream>
using namespace std;

int main(){
    int n; cin >> n;
    int r;
    int DELTA_MAX = -1e9;
    
    int MIN; cin >> MIN;
    
    for(int i=1;i<n;i++){
        cin >> r;
        DELTA_MAX = max(r - MIN, DELTA_MAX);
        MIN = min(MIN, r);
    }
    cout << DELTA_MAX << endl;
}
