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

int main()
{
    int v, e, r;
    cin >> v >> e >> r;
    vector<vector<pair<int, int> > > graph(100001);
    for(int i = 0; i < e; i++){
        int s, t, d;
        cin >> s >> t >> d;
        graph[s].push_back(make_pair(t, d));
    }
    priority_queue<pair<long long int, int> > qu;
    vector<long long int> result(100001, -mod);
    result[r] = 0;
    qu.push(make_pair(0, r));
    while(!qu.empty()){
        int nowplace = (qu.top()).second;
        long long int nowcost = (qu.top()).first;
        qu.pop();
        if(result[nowplace] > nowcost) continue;
        result[nowplace] = nowcost;
        for(int i = 0; i < graph[nowplace].size(); i++){
            int next = graph[nowplace][i].first;
            long long int cost = graph[nowplace][i].second;
            if(result[next] < nowcost - cost) qu.push(make_pair(nowcost - cost, next));
        }
    }
    for(int i = 0; i < v; i++){
        if(result[i] == -mod) cout << "INF" << endl;
        else cout << -result[i] << endl;
    }
    return 0;
}