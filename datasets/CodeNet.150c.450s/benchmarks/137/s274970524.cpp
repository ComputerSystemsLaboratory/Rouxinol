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

int main(){
    unordered_map<string, int> hashTable;
    int n;
    char cmd[7];
    char str[12];

    scanf("%d", &n);

    for (int i=0; i<n; i++){
        scanf("%s %s", cmd, str);
        if (cmd[0] == 'i'){
            hashTable[str] = 1;
        } else {
            if (hashTable[str] == 1) printf("yes\n");
            else printf("no\n");
        }
    }

    return 0;
}