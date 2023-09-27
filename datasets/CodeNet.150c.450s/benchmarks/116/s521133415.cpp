#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <cstring>

#define ll long long
#define ull unsigned long long
#define pii pair<int,int>
#define vi vector<int>
#define VS vector<string>
#define all(x) x.begin(),x.end()
#define mp make_pair
#define pb push_back

using namespace std;

int main(){
    int n, k;

    while(cin >> n >> k, n+k){
        int ans = -50000;
        int sum = 0;
        vi series;
        for(int i=0; i < n; i++){
            int m;
            cin >> m;
            series.push_back(m);

            if(i < k-1) sum += m;
            else {
                sum += m-series[i-k];
                ans = max(ans, sum);
            }
        }
        cout << ans << endl;
    }
}