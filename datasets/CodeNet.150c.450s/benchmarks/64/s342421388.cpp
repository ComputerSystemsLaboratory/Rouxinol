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

bool solve(int start, int n, int m, int a[]);

int main()
{
    int n;
    cin >> n;
    int A[20];
    for(int i = 0; i < n; i++){
        cin >> A[i];
    }
    sort(A, A + n);
    int q;
    cin >> q;
    int m;
    for(int i = 0; i < q; i++){
        cin >> m;
        if(solve(0, n, m, A)) cout << "yes" << endl;
        else cout << "no" << endl;
    }
}

bool solve(int start, int n, int m, int a[])
{
    bool ans = false;
    for(int i = start; i < n; i++){
        if(a[i] == m) ans = true;
        else if(a[i] < m) ans = solve(i + 1, n, m - a[i], a);
        if(ans == true) break;
    }
    return ans;
}