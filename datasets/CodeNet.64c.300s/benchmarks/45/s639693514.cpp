#include <cstdio>
#include <iostream>
#include <cmath>
#include <ctype.h>
#include <string> 
#include <sstream>
#include <iostream>
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
    int n, m, p;
    while(1){
        cin >> n >> m >> p;
        if(n == 0) break;
        int x[100];
        int sum = 0;
        for(int i = 0; i < n; i++){
            cin >> x[i];
            sum += x[i] * 100;
        }
        int ans;
        if(x[m - 1] == 0) ans = 0;
        else ans = (sum * (100 - p)) / (100 * x[m - 1]);
        cout << ans << endl;
    }
    return 0;
}