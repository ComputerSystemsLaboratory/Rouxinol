/* 
 * Project: M-SOLUTIONS プロコンオープン 2020 C - Marks
 * Author: toms74209200 <https://github.com/toms74209200>
 *
 * Created on 2020/07/25
 * Copyright (c) 2020 toms74209200
 * 
 * This software is released under the MIT License.
 * http://opensource.org/licenses/mit-license.php
 */
#include <cstdio>
#include <vector>
using namespace std;

int n;
int k;
vector<int> a;

void solve() {

    for (int i=k;i<n;i++) {
        if (a[i-k] < a[i])
            printf("Yes\n");
        else
            printf("No\n");
    }
}

int main() {

    scanf("%d", &n);
    scanf("%d", &k);
    for (int i=0;i<n;i++) {
        int tmp;
        scanf("%d", &tmp);
        a.push_back(tmp);
    }

    solve();
}