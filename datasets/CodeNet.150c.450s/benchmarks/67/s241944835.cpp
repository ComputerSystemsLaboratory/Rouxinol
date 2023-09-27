#include <cstdio>
#include <cstring>
#include <vector>
#include <map>
#include <set>
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
typedef long long ll;

#define REP(j,n) for (int (j)=0; j<(int)(n); ++j)
#define FOR(j,k,n) for (int (j)=(k); j<(int)(n); ++j)
#define FOREQ(j,k,n) for (int (j)=(k); j<=(int)(n); ++j)

#define MEMSET(z,val) memset(z,val,sizeof(z))

int main() {
    int n;
    while (scanf("%d", &n), n) {
        int ans = 0;
        for (int i = 1; i < n; i++) {
            int sum = 0;
            for (int j = i; sum < n; j++) {
                sum += j;
            }
            if (sum == n) {
                ans++;
            }
        }
        printf("%d\n", ans);
    }
}