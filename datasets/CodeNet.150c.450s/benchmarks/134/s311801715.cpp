#include <cstdio>
#include <array>
#include <algorithm>

using namespace std;

const int32_t N = 25;
array<int32_t, N> parent, left, right, sibling, degree;

void print_preorder(int32_t id) {
    printf(" %d", id);
    if (left[id] != -1) print_preorder(left[id]);
    if (right[id] != -1) print_preorder(right[id]);
    return;
}

void print_inorder(int32_t id) {
    if (left[id] != -1) print_inorder(left[id]);
    printf(" %d", id);
    if (right[id] != -1) print_inorder(right[id]);
    return;
}

void print_postorder(int32_t id) {
    if (left[id] != -1) print_postorder(left[id]);
    if (right[id] != -1) print_postorder(right[id]);
    printf(" %d", id);
    return;
}

int main() {
    parent.fill(-1);
    left.fill(-1);
    right.fill(-1);
    sibling.fill(-1);
    degree.fill(0);
    int32_t n;

    scanf("%d", &n);
    for (int32_t i = 0; i < n; i++) {
        int32_t id, l, r;
        scanf("%d %d %d", &id, &l, &r);

        if (l != -1) {
            left[id] = l;
            degree[id]++;
            parent[l] = id;
            sibling[l] = r;
        }

        if (r != -1) {
            right[id] = r;
            degree[id]++;
            parent[r] = id;
            sibling[r] = l;
        }
    }

    int32_t id_root = 0;
    while (parent[id_root] != -1) id_root++;

    printf("Preorder\n");
    print_preorder(id_root);
    printf("\n");

    printf("Inorder\n");
    print_inorder(id_root);
    printf("\n");

    printf("Postorder\n");
    print_postorder(id_root);
    printf("\n");

    return 0;
}