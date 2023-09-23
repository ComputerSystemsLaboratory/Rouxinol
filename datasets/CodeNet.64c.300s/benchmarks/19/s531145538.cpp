#include<stdio.h>
#include <algorithm>
#include <cassert>
#include <cctype>
#include <climits>
#include <cmath>
#include <complex>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <iostream>
#include <iterator>
#include <list>
#include <map>     
#include <numeric>
#include <queue>
#include <set>
#include <sstream>
#include <iomanip>
#include <stack>
#include <string>
#include <vector>
using namespace std;
#define ll long long
#define ld long double
#define roop(a,t) for(int a=0;a<t;a++) 
int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);
    int n;
    while (cin >> n) {
if(n==0){break;}
        int sum[5001];
        roop(i, n) {
            cin >> sum[i];
            if (i != 0) { sum[i] += sum[i - 1]; }
        }
        int ans = -9000000000;
        for (int i = -1; i < n-1; i++) {
            int sumi = 0;
            if (i != -1)
            {
                sumi = sum[i];
            }
            for (int j = i + 1; j < n; j++) {
 
                int sumj = sum[j];
                ans = max(ans, sumj - sumi);
            }
        }
        cout << ans << endl;
    }
    return 0;
}
