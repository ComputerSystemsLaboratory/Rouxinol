
#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES
#include <cfloat>
#include <climits>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <iostream>
#include <memory>
#include <string>

#include <algorithm>
#include <complex>
#include <list>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <stack>
#include <vector>

using namespace std;

#ifdef _MSC_VER
#define __typeof__ decltype
#endif

#define ITER(c)         __typeof__((c).begin())
#define FOREACH(it, c)  for (ITER(c) it=(c).begin(); it != (c).end(); ++it)
#define RITER(c)        __typeof__((c).rbegin())
#define RFOREACH(it, c) for (RITER(c) it=(c).rbegin(); it != (c).rend(); ++it)
#define REP(i, n)       REPEAT(i, 0, n)
#define REPEAT(i, k, n) for (int i = (k); i < (n); ++i)
#define REVREP(i, n)    for (int i = ((n)-1); i >= 0; --i)
#define FIND(c, n)      std::find((c).begin(), (c).end(), (n));
#define BSEARCH(c, n)   std::binary_search((c).begin(), (c).end(), (n))
#define LLPOW(p1,p2)    ((ll)pow((double)(p1), (int)p2))
#define ESIZEOF(A)      (sizeof(A)/sizeof((A)[0]))
#define MIN(p1,p2)      (((p1)<(p2))?(p1):(p2))
#define MAX(p1,p2)      (((p1)>(p2))?(p1):(p2))
#define CIN_NO_SYNC     do { cin.tie(0); ios_base::sync_with_stdio(false); } while(0)
#define GETSTR(p)       fgets((p), sizeof(p), stdin)
#define CHOMP(p)        do{ char *_q = (p) + strlen(p)-1; if(*_q == '\n') *_q = 0; } while(0)

int main(){
    int n;
    while(cin >> n, n){
        int v[5001] = {0};
        int p = 0;
        int max = INT_MIN;
        REP(i, n){
            int in;
            cin >> in;
            REP(j, i+1){
                v[j] += in;
                max = MAX(max, v[j]);
                //printf("%d ", v[j]);
            }
            //printf("\n");
        }
        cout << max << endl;
    }
    return 0;
}