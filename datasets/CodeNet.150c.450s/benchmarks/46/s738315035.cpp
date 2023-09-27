#include <iostream>
using namespace std;

int howManyWays(int end_val, int target_val)
{
    int ways = 0; // ????????????????????°
    int target_val_tmp = 0;

    for(int i = 1; i <= end_val; i++) {
        for(int j = i+1; j <= end_val; j++) {
            for(int k = j+1; k <= end_val; k++) {
                target_val_tmp = target_val - i - j - k;
                if(target_val_tmp == 0) {
                    ways++;
                    break;
                }
            }
        }
    }

    return ways; // ?????????????????°?????????????????????
}

int main()
{
    // ???????????????????????\???
    int n, x;
    int end_val[512], target_val[512];
    int vi = 0;
    while(cin >> n >> x) {
        end_val[vi]    = n;
        target_val[vi] = x;
        if(n == 0 && x == 0) break;
        vi++;
    }

    for(int i = 0; i < vi; i++) {
        cout << howManyWays(end_val[i], target_val[i]) << endl;
    }

    return 0;
}