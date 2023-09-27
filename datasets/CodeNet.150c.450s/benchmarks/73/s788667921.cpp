#include <iostream>
#include <algorithm>
#include <vector>

#define INF 2147483647
#define RMQ_SIZE 262144

using namespace std;

void update(int pos, int value);
int getSum(int right, int left);
int dfs(int a,int b,int k,int l,int r);

vector<int> tree(RMQ_SIZE, 0);

int main()
{
    int n, q;
    cin >> n >> q;

    for (int i = 0; i < q; i++) {
        int tmp, a, b;
        cin >> tmp >> a >> b;
        if (tmp) {
            cout << getSum(a, b+1) << endl;
        } else {
            update(a, b);
        }
    }
            
    return 0;
}


int dfs(int a,int b,int k,int l,int r)
{
    //* ????±????????????????????????¬???????????¢?´¢.
    if (r <= a || b <= l) {
        return 0;
    }
    //* ??¨?????¬?????????????±?????????\???????????????.
    if (a <= l && r <= b) {
        return tree[k];
    }
    int m = (l+r)/2;
    return dfs(a, b, k*2+1, l, m) + dfs(a, b, k*2+2, m, r);
}

int getSum(int right, int left)
{
    return dfs(right, left, 0, 0, RMQ_SIZE/2);
}

void update(int pos, int value)
{
    pos += (RMQ_SIZE/2 -1);
    tree[pos] += value;
    while (pos) {
        pos = (pos-1)/2;
        tree[pos] = tree[pos*2+1] + tree[pos*2+2];
    }
}