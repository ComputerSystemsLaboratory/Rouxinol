#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, const char * argv[]) {
    while(1){
        int n; cin >> n;
        if(!n) break;
        
        int big = -1, small = 1001;
        int sum = 0;
        for(int i = 0; i < n; i++){
            int point; cin >> point;
            big = max(big, point);
            small = min(small, point);
            sum += point;
        }
        cout << (sum - big - small) / (n - 2) << endl;
    }
}