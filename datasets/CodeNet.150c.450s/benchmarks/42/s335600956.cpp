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
#include <cstdlib>
using namespace std;
typedef long long ll;

int n,q;
queue<pair<string,int> > p;

int main()
{
    scanf("%d%d",&n,&q);
    string s;
    int x;
    for(int i = 0; i < n; ++i){
        cin >> s >> x;
        p.push(make_pair(s,x));
    }
    int sum = 0;
    while(!p.empty())
    {
        pair<string,int> cur;
        cur = p.front();
        sum += min(cur.second,q);
        if(cur.second <= q){
            cout << cur.first << " " << sum << endl;
            p.pop();
        }else{
            cur.second -= q;
            p.pop();
            p.push(cur);
        }
    }
    return 0;
}