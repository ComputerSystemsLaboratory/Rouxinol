#include <cstdio>
#include <iostream>
#include <cmath>
#include <ctype.h>
#include <string>
#include <sstream>
#include <algorithm>
#include <cstdlib>
#include <map>
#include <queue>
#include <utility>
#include <vector>
#include <set>

using namespace std;

int main()
{
    int n;
    int result[31];
    result[0] = 1;
    result[1] = 1;
    result[2] = 2;
    for(int i = 3; i < 31; i++){
    result[i] = result[i - 3] + result[i - 2] + result[i - 1];
    }
    while(1){
        cin >> n;
        if(n == 0) break;
        int ans = 0;
        // cout << result[n] << endl;
        if(result[n] % 10 == 0) ans = result[n] / 10;
        else ans = result[n] / 10 + 1;
        if(ans % 365 == 0) ans = ans / 365;
        else ans = ans / 365 + 1;
        cout << ans << endl;
    }
    return 0;
}