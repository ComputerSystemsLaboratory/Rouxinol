#include<iostream>
#include<queue>
using namespace std;
typedef long long ll;


int main() {
    cin.tie(0);
    cin.sync_with_stdio(0);
    
    int n, m;
    scanf("%d %d", &n, &m);
    vector<int> goal(n+1, -1);
    vector<queue<int>> neighbor(n+1);

    int a, b;
    for (int i = 0; i < m; i++) {
        scanf("%d %d", &a, &b);
        neighbor[a].push(b);
        neighbor[b].push(a);
    }

    queue<int> q;
    q.push(1);
    int dis = 0;
    while (!q.empty()){
        int room = q.front();
        q.pop();
        queue<int> nq = neighbor[room];
        while (!nq.empty()){
            int next = nq.front();
            nq.pop();
            if (goal[next] == -1) {
                goal[next] = room;
                q.push(next);
            }
        }
    } 

    printf("Yes\n");
    for(int i = 2; i <= n; i++) {
        printf("%d\n", goal[i]);
    }
}