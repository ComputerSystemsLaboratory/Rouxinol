#include <cstdio>
#include <iostream>
#include <sstream>
#include <fstream>
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
#include <functional>
#include <cctype>
 
using namespace std;
 
#define REP(i,n) for(int i = 0; i < (int)n; ++i)
 
int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
 
    int n;
    cin >> n;
    vector<int> A(n);
 
    REP(i, n) cin >> A[i];
 
    int max = *max_element(A.begin(), A.end());
    vector<int> B(max + 1);
 
    REP(i, n) {
        ++B[A[i]];
    }
 
    REP(i, max + 1)
        REP(j, B[i]) {
            cout << i;
            if(i == max && j == B[i] - 1) cout << endl;
            else cout << ' ';
        }
    return 0;
}