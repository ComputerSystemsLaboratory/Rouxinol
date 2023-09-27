#include <cstdio>
#include <vector>

using namespace std;

int N;
const int LEN = 10;
int arr[LEN+1];
vector<int> bucket[2];

bool dfs(int n, int idx)
{
    if (n == LEN)
        return true;
    vector<int>& buc = bucket[idx];
    if (!buc.empty() && arr[n] < buc.back()) return false;
    buc.push_back(arr[n]);
    bool res[2];
    res[0] = dfs(n+1, 0);
    if (res[0]) goto finish;
    res[1] = dfs(n+1, 1);
finish:
    buc.erase(buc.end()-1);
    return res[0] || res[1];
}

int main()
{
    scanf("%d", &N);
    for (int j = 0; j < N; j++) {
        for (int i = 0; i < LEN; i++) {
            scanf("%d", &arr[i]);
        }
        if (dfs(0, 0) || dfs(0, 1)) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}