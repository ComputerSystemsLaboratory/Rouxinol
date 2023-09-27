#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#include <algorithm>

void preorder(int id, int* type, int* left, int* right, int* parent, int* sibling) {
    std::cout << " " << id;
    if (left[id] >= 0) {
        preorder(left[id], type, left, right, parent, sibling);
    }
    if (right[id] >= 0) {
        preorder(right[id], type, left, right, parent, sibling);
    }
}

void inorder(int id, int* type, int* left, int* right, int* parent, int* sibling) {
    if (left[id] >= 0) {
        inorder(left[id], type, left, right, parent, sibling);
    }
    std::cout << " " << id;
    if (right[id] >= 0) {
        inorder(right[id], type, left, right, parent, sibling);
    }
}

void postorder(int id, int* type, int* left, int* right, int* parent, int* sibling) {
    if (left[id] >= 0) {
        postorder(left[id], type, left, right, parent, sibling);
    }
    if (right[id] >= 0) {
        postorder(right[id], type, left, right, parent, sibling);
    }
    std::cout << " " << id;
}

int main() {
    int n, root;
    int left[25], right[25], type[25], depth[25], height[25], deg[25]={}, parent[25], sibling[25];
    std::cin >> n;
    for (int i=0; i<n; i++) {
        parent[i] = -1;
        sibling[i] = -1;
        type[i] = 1;
        depth[i] = -1;
        height[i] = -1;
    }
    for (int i=0; i<n; i++) {
        int id;
        std::cin >> id;
        std::cin >> left[id] >> right[id];
        if (left[id] >= 0) {
            deg[id]+=1;
            parent[left[id]] = id;
        }
        if (right[id] >= 0) {
            deg[id]+=1;
            parent[right[id]] = id;
        }
        if (deg[id] == 2) {
            sibling[left[id]] = right[id];
            sibling[right[id]] = left[id];
        } else if (deg[id] == 0) {
            type[id] = 2;
        }
    }
    for (int i=0; i<n; i++) {
        if (parent[i] == -1) {
            type[i] = 0;
            root=i;
        }
    }

    std::cout << "Preorder\n";
    preorder(root, type, left, right, parent, sibling);
    std::cout << "\nInorder\n";
    inorder(root, type, left, right, parent, sibling);
    std::cout << "\nPostorder\n";
    postorder(root, type, left, right, parent, sibling);
    std::cout << "\n";

    return 0;
}
