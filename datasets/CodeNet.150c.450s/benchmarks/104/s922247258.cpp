#include <cstdio>
#include <vector>
#include <algorithm>
#include <cstring>
#include <string>
#include <cctype>
#include <sstream>
#include <cmath>
#include <climits>
#include <set>
#include <iostream>
#include <map>
#include <functional>
#include <cstdlib>
#include <numeric>
#include <queue>
#include <complex>
#include <sstream>
#include <stack>

using namespace std;

#define reep(i, f, n) for (int i = f; i < n; ++i)
#define rep(i, n) reep(i, 0, n)


int main(){
    int w,n,a,b,t;
    int arr[30];
    scanf("%d", &w);
    scanf("%d", &n);
    rep(i,w) arr[i] = i+1;
    while(n--) {
        scanf("%d,%d", &a, &b);
        t = arr[a-1];
        arr[a-1] = arr[b-1];
        arr[b-1] = t;
    }
    rep(i,w) printf("%d\n", arr[i]);
}
