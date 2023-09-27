/* ALDS1_11_B: Depth First Search */

#include <iostream>
#include <cstdio>
#include <vector>
using std::vector;

vector<int> *graph;
int elapsed = 1;

// Search the graph recursively by depth-first search.
void traverse(int id, int found[], int finished[]) {
    if (0 < found[id]) {
        return;
    }

    found[id] = elapsed++;
    vector<int> adjs = graph[id];
    for (int i = 0; i < adjs.size(); i++) {
        traverse(adjs[i], found, finished);
    }
    finished[id] = elapsed++;
}

int main() {
    int n_v;
    scanf("%d", &n_v);

    int max_v = n_v + 1;
    graph = new vector<int>[max_v];

    for (int i = 0; i < max_v; i++) {
        int id, n_adjs;
        scanf("%d %d", &id, &n_adjs);

        for (int j = 0; j < n_adjs; j++) {
            int adj_id;
            scanf("%d", &adj_id);
            graph[id].push_back(adj_id);
        }
    }

    int found[max_v];
    int finished[max_v];
    std::fill_n(found, max_v, 0);
    std::fill_n(finished, max_v, 0);

    for (int id = 1; id < max_v; id++) {
        traverse(id, found, finished);
    }

    for (int id = 1; id < max_v; id++) {
        printf("%d %d %d\n", id, found[id], finished[id]);
    }
    return 0;
}