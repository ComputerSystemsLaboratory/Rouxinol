#include <iostream>
#include <queue>
#include <utility>
using namespace std;

int a[100][100];
bool r[100];


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin>>n;
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            cin>>a[i][j];
        }
    }
    priority_queue<pair<int,int>, vector<pair<int,int> >, greater<pair<int,int> > >q;
    q.push(make_pair(0,0));
    int cost=0;
    pair<int,int> e;
    while(!q.empty()) {
        e=q.top();
        q.pop();
        if(r[e.second]) continue;
        r[e.second]=true;
        cost+=e.first;
        for(int i=0; i<n; i++) {
            if(a[e.second][i]!=-1) q.push(make_pair(a[e.second][i], i));
        }
    }
    cout<<cost<<'\n';
    return 0;
}