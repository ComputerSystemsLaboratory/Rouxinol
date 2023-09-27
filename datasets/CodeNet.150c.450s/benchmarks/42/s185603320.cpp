#include <cstdio>
#include <queue>
#include <string>
#include <utility>
#include <vector>

using namespace std;

int main()
{
    int n;
    int q;
    scanf("%d %d", &n, &q);

    queue<pair<string, int>> qu;
    for (int i = 0; i < n; ++i) {
        char c[100];
        int n;
        scanf("%s %d", c, &n);
        qu.push(make_pair(string{c}, n));
    }

    vector<pair<string, int>> completed;
    int now = 0;
    while (!qu.empty()) {
        auto t = qu.front();
        qu.pop();
        auto remain = t.second - q;
        if (remain <= 0) {
            now += q + remain;
            completed.push_back(make_pair(t.first, now));
        }
        else {
            now += q;
            qu.push(make_pair(t.first, remain));
        }
    }
    for (auto&& i : completed) {
        printf("%s %d\n", i.first.c_str(), i.second);
    }
}