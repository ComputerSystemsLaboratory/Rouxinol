#include <iostream>
#include <sstream>
#include <iomanip>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
#include <list>
#include <queue>
#include <stack>
#include <set>
#include <map>
#include <bitset>
#include <numeric>
#include <climits>
#include <cfloat>
using namespace std;

int main()
{
    for(;;){
        int n, k;
        cin >> n >> k;
        if(n == 0)
            return 0;

        vector<int> a(n);
        for(int i=0; i<n; ++i)
            cin >> a[i];

        int sum = 0;
        for(int i=0; i<k; ++i)
            sum += a[i];

        int ret = sum;
        for(int i=0; i<n-k; ++i){
            sum -= a[i];
            sum += a[i+k];
            ret = max(ret, sum);
        }
        cout << ret << endl;
    }
}