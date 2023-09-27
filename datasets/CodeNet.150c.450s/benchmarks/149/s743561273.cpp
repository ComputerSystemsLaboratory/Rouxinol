#include <cstdio>
#include <iostream>
#include <cmath>
#include <ctype.h>
#include <string> 
#include <sstream>
#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <map>
#include <queue>
#include <utility>
#include <vector>
#include <set>
#include <list>
#include <cstring>
#include <stack>
   
using namespace std;

#define mod 1000000007

int root[10001];

int getroot(int n)
{
    if(root[n] == -1) return n;
    else return root[n] = getroot(root[n]);
}

void unite(int x, int y)
{
    x = getroot(x);
    y = getroot(y);
    if(x == y) return;
    if(x > y) swap(x, y);
    root[y] = x;
}

int main()
{
    int n, q;
    cin >> n >> q;
    for(int i = 0; i < n; i++){
        root[i] = -1;
    }
    for(int i = 0; i < q; i++){
        int c, x, y;
        cin >> c >> x >> y;
        if(c == 0){
            unite(x, y);
        } else {
            cout << (getroot(x) == getroot(y)) << endl;
        }
    }
    return 0;
}