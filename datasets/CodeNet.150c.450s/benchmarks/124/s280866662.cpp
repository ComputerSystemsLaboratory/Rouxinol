/*
 ********************************************************************************
 *  Author: ThoseBygones
 *  Version: V1.0
 *  Date: 2018-06-27
 *  Subject: ACM-ICPC
 *  Language: C/C++11
 *  OJ: AOJ
 *  Algorithm: 最短路Dijkstra
 ********************************************************************************
 *  Algo-Description:
 ********************************************************************************
 */

//#include <bits/stdc++.h>  //For CodeForces only

//#pragma comment(linker,"/STACK:102400000,102400000")
#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cassert>
#include <climits>
#include <ctime>
#include <numeric>
#include <vector>
#include <algorithm>
#include <bitset>
#include <cmath>
#include <cstring>
#include <iomanip>
#include <complex>
#include <deque>
#include <functional>
#include <list>
#include <map>
#include <string>
#include <sstream>
#include <set>
#include <stack>
#include <queue>
using namespace std;
template<class T> inline T sqr(T x)
{
    return x * x;
}
typedef long long LL;
typedef unsigned long long ULL;
typedef long double LD;
typedef pair<int, int> PII;
typedef pair<PII, int> PIII;
typedef pair<LL, LL> PLL;
typedef pair<LL, int> PLI;
typedef pair<LD, LD> PDD;
#define MP make_pair
#define PB push_back
#define sz(x) ((int)(x).size())
#define clr(ar,val) memset(ar, val, sizeof(ar))
#define istr stringstream
#define FOR(i,n) for(int i=0;i<(n);++i)
#define forIt(mp,it) for(__typeof(mp.begin()) it = mp.begin();it!=mp.end();it++)
const double EPS = 1e-6;
const int INF = 0x3fffffff;
const LL LINF = INF * 1ll * INF;
const double PI = acos(-1.0);

#define lson l,mid,rt<<1
#define rson mid+1,r,rt<<1|1
#define lowbit(u) (u&(-u))
#define MAXN 105
#define MAXE (MAXN*MAXN)>>1

typedef int Type;

class Dijkstra
{
public:
    int head[MAXN],nxt[MAXE],cnt;
    Type d[MAXN];
    struct Edge
    {
        int v;
        Type cost;
        Edge() {}
        Edge(int v,Type cost):v(v),cost(cost) {}
        bool operator<(const Edge& ed) const
        {
            return cost>ed.cost;
        }
    } e[MAXE];
    bool vis[MAXN];

    //初始化，n为点数
    void init(int n)
    {
        cnt = 0;
        for(int i = 0; i<n; i++)
            head[i] = -1;
    }

    inline void addEdge(int u,int v,Type cost)
    {
        e[cnt] = Edge(v,cost);
        int tmp = head[u];
        head[u] = cnt;
        nxt[cnt++] = tmp;
    }

    Type dijkstra(int s,int t,int n)
    {
        for(int i = 0; i<n; i++)
            d[i] = INF,vis[i] = false;
        d[s] = 0;
        priority_queue<Edge> q;
        q.push(Edge(s,0));
        while(!q.empty())
        {
            Edge ed = q.top();
            q.pop();
            vis[ed.v] = true;
            if(ed.v==t) //如果未给出终点t，则完全可以不要跟t有关的语句
                return d[t];
            for(int i = head[ed.v]; ~i; i = nxt[i])
            {
                Edge ee = e[i];
                if(!vis[ee.v]&&d[ee.v]>d[ed.v]+ee.cost)
                {
                    d[ee.v] = d[ed.v]+ee.cost;
                    /*
                     *  最短路树
                    	p[ee.v] = MP(u,i);
                    */
                    q.push(Edge(ee.v,d[ee.v]));
                }
            }
        }
        return d[t];
    }

    void buildGraph(int n)
    {
        for(int i=0; i<n; i++)
        {
            int u,num;
            scanf("%d%d",&u,&num);
            while(num--)
            {
                int v,w;
                scanf("%d%d",&v,&w);
                addEdge(u,v,w);
            }
        }
    }
} dij;

int main()
{
    int n;
    scanf("%d",&n);
    dij.init(n);
    dij.buildGraph(n);
    for(int i=0; i<n; i++)
        printf("%d %d\n",i,dij.dijkstra(0,i,n));
    return 0;
}

