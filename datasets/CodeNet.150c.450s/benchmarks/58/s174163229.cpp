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
#include <stack>
using namespace std;
typedef long long i64;
typedef vector<int> ivec;
typedef vector<string> svec;

//??????????????°?????£?¨?
stack<int> S;


int main()
{
    char inString[100];
    int a;
    int b;

    while (scanf("%s", inString) != EOF){
        if (inString[0] == '+'){
            a = S.top();
            S.pop();
            b = S.top();
            S.pop();
            S.push(a+b);
        } else if (inString[0] == '-'){
            b = S.top();
            S.pop();
            a = S.top();
            S.pop();
            S.push(a-b);
        } else if (inString[0] == '*'){
            a = S.top();
            S.pop();
            b = S.top();
            S.pop();
            S.push(a*b);
        } else {
            S.push(atoi(inString));
        }
    }
    printf("%d\n", S.top());


    return 0;
}