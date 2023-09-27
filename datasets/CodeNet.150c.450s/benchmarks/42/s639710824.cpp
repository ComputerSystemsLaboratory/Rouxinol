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








queue<pair<string,int>> Q;
int n;
int q;
int timer;

int main()
{
    scanf("%d", &n);
    scanf("%d", &q);

    for (int i=0; i<n; i++){
        string inName;
        char inNameChar[10];
        int inTime;
        scanf("%s", inNameChar);
        inName = inNameChar;
        scanf("%d", &inTime);
        Q.push(make_pair(inName, inTime));
    }

    while(!Q.empty()){
        pair<string, int> tmpPair;
        tmpPair = Q.front();
        Q.pop();

        int tmpElapseTime;
        tmpElapseTime = min(tmpPair.second, q);
        tmpPair.second -= tmpElapseTime;
        timer += tmpElapseTime;
        if (tmpPair.second > 0){
            Q.push(tmpPair);
        } else {
            printf("%s ", tmpPair.first.c_str());
            printf("%d\n", timer);
        }
    }


    return 0;
}