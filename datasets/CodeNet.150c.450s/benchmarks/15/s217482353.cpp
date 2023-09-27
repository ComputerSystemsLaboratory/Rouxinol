#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <cassert>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <stack>
#include <list>
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

int linearSearch(int A[], int n, int key){
    int i = 0;
    A[n] = key;
    while (A[i] != key) i++;
    return i != n;
}
int main()
{
    int n;
    int A[10000+1];
    int q;
    int key;
    int sum = 0;

    scanf("%d", &n);
    for (int i=0; i<n; i++) scanf("%d", &A[i]);
    scanf("%d", &q);
    for (int i=0; i<q; i++) {
        scanf("%d", &key);
        if (linearSearch(A, n, key)) sum++;
    }
    printf("%d\n", sum);

    return 0;
}