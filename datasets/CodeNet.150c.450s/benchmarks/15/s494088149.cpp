#include <iostream>
#include <deque>
#include <string>
#include <vector>
#include <queue>
#include <cstdio>
#include <stack>
#include <algorithm>
#include <cstring>
#include <cctype>
#include <cstdio>
#include <cmath>
#include<list>
#include <cstdlib>
using namespace std;
typedef long long ll;
const int maxn = 1e4 + 8;

int n,q,x,num;
int s[maxn],t[maxn];

bool if_find(int x)
{
    s[n] = x;
    int i = 0;
    while(i != n){
        if(s[i] == x) return true;
        i++;
    }
    return false;
}
int main()
{
    scanf("%d",&n);
    num = 0;
    for(int i = 0; i < n; ++i) scanf("%d",&s[i]);
    scanf("%d",&q);
    for(int i = 0; i < q; ++i){
        scanf("%d",&x);
        if(if_find(x)){
            num++;
        }
    }
    printf("%d\n",num);
    return 0;
}