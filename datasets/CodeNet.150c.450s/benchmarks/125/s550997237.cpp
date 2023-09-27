/* 
 * ALDS1_11B.cpp
 */
#include <iostream>
#include <vector>
#include <cstdio>
#include <cstdlib>
#include <cstring>

using namespace std;

int N;
int ad_k[101];
int ad_list[101][101];

int jikan = 0;
int d[101], f[101];
bool visited[101];

void visit(int id) {
    if (visited[id])
        return;

    visited[id] = true;
    d[id] = ++jikan;
    for (int i = 0; i < ad_k[id]; ++i) {
        visit(ad_list[id][i]);
    }
    f[id] = ++jikan;
}

int main(void) {

    scanf("%d", &N);
    for (int i = 1, id; i <= N; ++i) {
        scanf("%d", &id);
        scanf("%d", ad_k + id);
        for (int j = 0; j < ad_k[id]; ++j) {
            scanf("%d", ad_list[id] + j);
        }
    }

    for (int i = 1; i <= N; ++i) {
        visit(i);
    }

    for (int i = 1; i <= N; ++i) {
        printf("%d %d %d\n", i, d[i], f[i]);
    }

    return 0;
}