// ALDS1_9_A.cpp
// Heaps - Complete Binary Tree
#include <iostream>
#include <vector>
#include <cstdio>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> cbt(n);
    for (int i = 0; i < n; i++) {
        cin >> cbt[i];
    }
    for (int i = 1; i<= n; i++) {
        printf("node %d: key = %d, ", i, cbt[i-1]);
        int parent = i / 2;
        int left = 2 * i;
        int right = 2 * i + 1;
        if (parent > 0)
            printf("parent key = %d, ", cbt[parent-1]);
        if (left <= n)
            printf("left key = %d, ", cbt[left-1]);
        if (right <= n)
            printf("right key = %d, ", cbt[right-1]);
        printf("\n");
    }

    return 0;
}