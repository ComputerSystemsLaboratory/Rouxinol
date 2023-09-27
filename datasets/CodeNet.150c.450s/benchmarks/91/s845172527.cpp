//
//  AOJ 0009 Prime Number
//
//  Created by TaoSama on 2015-03-23
//  Copyright (c) 2015 TaoSama. All rights reserved.
//
#include <algorithm>
#include <cctype>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iomanip>
#include <iostream>
#include <map>
#include <queue>
#include <string>
#include <set>
#include <vector>
#define CLR(x,y) memset(x, y, sizeof(x))

using namespace std;
const int INF = 0x3f3f3f3f;
const int MOD = 1e9 + 7;
const int N = 1e6 + 10;

bool is_prime[N];
int n, cnt, ans[N];

int main() {
#ifdef LOCAL
    freopen("in.txt", "r", stdin);
//	freopen("out.txt","w",stdout);
#endif
    ios_base::sync_with_stdio(0);

    memset(is_prime, true, sizeof is_prime);
    is_prime[1] = false; ans[1] = 0;
    for(int i = 2; i < 1e6; ++i) {
        if(is_prime[i]) {
            ans[i] = ++cnt;
            for(int j = 2 * i; j < 1e6; j += i)
                is_prime[j] = false;
        } else ans[i] = cnt;
    }

    while(cin >> n) {
        if(n <= 0) cout << 0 << endl;
        else	cout << ans[n] << endl;
    }

    return 0;
}