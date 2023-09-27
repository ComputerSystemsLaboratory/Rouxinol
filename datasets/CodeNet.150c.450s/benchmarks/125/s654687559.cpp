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
    vector<int> degrees = graph[id];
    for (int i = 0; i < degrees.size(); i++) {
        traverse(degrees[i], found, finished);
    }
    finished[id] = elapsed++;
}

int main() {
    int n_v;
    scanf("%d", &n_v);

    int max_v = n_v + 1;
    graph = new vector<int>[max_v];

    for (int i = 0; i < max_v; i++) {
        int id, n_degrees;
        scanf("%d %d", &id, &n_degrees);

        for (int j = 0; j < n_degrees; j++) {
            int deg_id;
            scanf("%d", &deg_id);
            graph[id].push_back(deg_id);
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