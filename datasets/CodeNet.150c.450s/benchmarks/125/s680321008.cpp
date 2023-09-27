#include <iostream>
#include <stack>
using namespace std;

#define WHITE 0
#define GRAY 1
#define BLACK 2

int d[101], f[101];
int color[101] = { 0 };
int M[101][101] = { 0 };

int times;

int cur;

stack<int> s;

int search_node(int n) {
    for (int node = 1; node <= n; ++node) {
        if (M[cur][node] == 1 && color[node] == WHITE) {
            return node;
        }
    }
    return -1;      // 見つからなかった場合
}

void visit_node(int target) {
    times += 1;
    s.push(target);
    cur = s.top();
    d[cur] = times;
    color[cur] = GRAY;
}

void reversal_node() {
    // ノードを戻っていく終了時刻を記入する処理+スタック削除
    times += 1;
    s.pop();
    f[cur] = times;
    color[cur] = BLACK;
    if (s.size() != 0) {
        cur = s.top();
    } else {
        cur = 0;
    }
}

bool black_judge(int n) {        // すべて探索済みか判定，初期化
    for (int node = 1; node <= n; ++node) {
        if (color[node] != BLACK) {
            s.push(node);
            cur = node;
            color[node] = GRAY;
            d[node] = times;
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    cin >> n;
    int u, k;
    int ver;
    times = 0;
    for (int i = 1; i <= n; ++i) {
        cin >> u >> k;
        for (int j = 1; j <= k; ++j) {
            cin >> ver;
            M[i][ver] = 1;           // 隣接行列が得られる
        }
    }

    while (true) {
        times += 1;
        if (black_judge(n)) {
            break;                  // すべて探索済みなら完了
        }
        while (s.size() != 0) {
            int target;
            target = search_node(n);
            if (target == -1) {
                reversal_node();
            } else {
                visit_node(target);
            }
        }
    }
    
    for (int i = 1; i <= n; ++i) {
        cout << i << " " << d[i] << " " << f[i] << endl;
    }

    return 0;
}
