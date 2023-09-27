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

int main()
{
    int n;
    int inNum;
    char inCommand[20];
    list<int> ans;

    scanf("%d", &n);

    for (int i=0; i<n; i++){
        scanf("%s", inCommand);
        if (inCommand[0] == 'i'){
            scanf("%d", &inNum);
            ans.push_front(inNum);
        } else if (inCommand[6] == 'L'){
            ans.pop_back();
        } else if (inCommand[6] == 'F'){
            ans.pop_front();
        } else if (inCommand[0] == 'd'){
            scanf("%d", &inNum);
            for (list<int>::iterator it = ans.begin(); it != ans.end(); it++){
                if (*it == inNum){
                    ans.erase(it);
                    break;
                }
            }
        }

    }

    for (list<int>::iterator it = ans.begin(); it != ans.end(); it++){
        if (it != ans.begin()) printf(" ");
        printf("%d", *it);
    }
    printf("\n");

    return 0;
}