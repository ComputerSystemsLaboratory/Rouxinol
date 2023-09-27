// O(n)

#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <cassert>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <queue>
#include <deque>
#include <set>
#include <map>
#include <utility>
#include <numeric>
#include <algorithm>
#include <bitset>
#include <complex>
#include <cstdint>
#include <unordered_set>
#include <unordered_map>
using namespace std;
typedef long long i64;
typedef vector<int> ivec;
typedef vector<string> svec;

int main(){
    //?????°?????£?¨?
    int R[200000];
    int n;
    int ans = -2000000000;
    int min_price;

    //?????????????????????
    scanf("%d", &n);
    for (int i=0; i<n; i++) scanf("%d", &R[i]);

    //?????????
    min_price = R[0];

    
    //??¢?????´?????????
    for(int i=1; i<n; i++){
        ans = max(ans, R[i] - min_price);
        min_price = min(min_price, R[i]);
    }

    //??????
    printf("%d\n", ans);

    return 0;
}