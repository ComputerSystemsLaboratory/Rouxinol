#include <iostream>
using namespace std;
const int64_t INF = 1145141919;
int main(){
    int64_t minx;
    int64_t res = -1 * INF;
    int n; cin >> n;
    for(int i=0; i<n; ++i){
        int64_t x; cin >> x;
        if(!i){
            minx = x;    
            continue;
        }
        res = max(res, x-minx);
        minx = min(minx, x);
    }
    cout << res << endl;
    return 0;
}
