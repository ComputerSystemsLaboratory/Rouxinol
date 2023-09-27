#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <stack>
#include <queue>
#include <cstdlib>
#include <cstdio>
#include <string>
#include <cstring>
using namespace std;

int W, H, x, y, r;

int main() {
    cin >> W >> H >> x >> y >> r;
    
    if (   0 <= x - r && 0 <= y - r
        && x + r <= W && y + r <= H ) {
        printf("Yes\n");
    } else printf("No\n");
    
    return 0;
}