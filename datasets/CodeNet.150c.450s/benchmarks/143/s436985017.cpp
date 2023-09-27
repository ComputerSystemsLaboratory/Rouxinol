#include <iostream>
#include <math.h>
#include <vector>
using namespace std;

int main(void)
{
    int n; cin >> n;
    vector<int> cnt(100000, 0);
    long long sum = 0;
    int a;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        sum += a;
        cnt[a-1]++;
    }
    int q; cin >> q;
    int b, c;
    vector<long long> ans(q, 0);
    for (int i = 0; i < q; i++)
    {
        cin >> b >> c;
        sum = sum + (c - b) * cnt[b-1];
        cnt[c-1] += cnt[b-1];
        cnt[b-1] = 0;
        ans[i] = sum;
    }
    for (int i = 0; i < q; i++)
    {
        cout << ans[i] << endl;
    }
}