/* 
 * ALDS1_11B.cpp
 */
#include <iostream>
#include <queue>
#include <cstdio>
#include <cstdlib>
#include <cstring>

using namespace std;

int N;
int ad_k[101];
int ad_list[101][101];
int result[101];

struct Data {
    int d, v;
};

queue<Data> q;

int main(void) {

    scanf("%d", &N);
    for (int i = 1, id; i <= N; ++i) {
        scanf("%d", &id);
        scanf("%d", ad_k + id);
        for (int j = 0; j < ad_k[id]; ++j) {
            scanf("%d", ad_list[id] + j);
        }
    }

    q.push({0, 1});
    while (!q.empty()) {
        Data data = q.front();
        q.pop();

        for (int i = 0; i < ad_k[data.v]; ++i) {
            if (result[ad_list[data.v][i]] != 0 || ad_list[data.v][i] == 1)
                continue;
            result[ad_list[data.v][i]] = data.d + 1;
            q.push({data.d + 1, ad_list[data.v][i]});
        }
    }

    for (int i = 1; i <= N; ++i) {
        printf("%d ", i);
        if (result[i] == 0 && i != 1)
            printf("-1\n");
        else
            printf("%d\n", result[i]);
    }

    return 0;
}