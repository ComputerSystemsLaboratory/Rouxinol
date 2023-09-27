#include <cstdio>
#include <vector>
using namespace std;

const int maxn = 100;
vector<int> G[maxn + 5];
//int book[maxn + 5][maxn + 5];
int n;
int d[maxn + 5];
int f[maxn + 5];
int time = 0;


void dfs(int vertex) {
    d[vertex] = ++time;

    int len = G[vertex].size();
    for(int i = 0; i < len; i++) {
        if(!d[G[vertex][i]]) dfs(G[vertex][i]);
    }

    f[vertex] = ++time;
}

int main() {
    scanf("%d", &n);

    for(int i = 1; i <= n; i++) {
        int num;
        scanf("%d", &num);
        int count;
        scanf("%d", &count);


        while(count--) {
            int temp; scanf("%d", &temp);
            G[num].push_back(temp);
        }
    }
    for(int i = 1; i <= n; i++) {
        if(!d[i]) dfs(i);
    }

    for(int i = 1; i <= n; i++) {
        printf("%d %d %d\n", i, d[i], f[i]);
    }
    return 0;
}