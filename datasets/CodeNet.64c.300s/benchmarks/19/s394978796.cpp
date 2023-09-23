#include <iostream>
#include <cstdio>
#include <climits>
using namespace std;

int main(void) {
    int num;
    while(cin >> num, num != 0) {
        int ary[num + 1];
        ary[0] = 0;
        for(int r = 1; r <= num; r++) {
            int input; cin >> input;
            ary[r] = ary[r - 1] + input;
        }
        int max = INT_MIN;
        for(int r = 1; r <= num; r++) {
            for(int c = 0; c < r; c++) {
                int val = ary[r] - ary[c];
                if(val > max) max = val;
            }
        }
        
        cout << max << endl;
    }
    return(0);
}