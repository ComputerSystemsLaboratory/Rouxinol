#include <cstdio>
#include <cstdlib>

int getParent(const int i);
int getLeft(const int i);
int getRight(const int i);

int main(int argc, const char** argv) {
    int *arr, size;

    scanf("%d", &size);

    arr = (int *) calloc(sizeof(int), size + 2);
    for (int i = 1; i < size + 1; i++) {
        scanf("%d", arr + i);
    }

    for (int i = 1; i < size + 1; i++) {
        printf("node %d: key = %d, ", i, arr[i]);
        if (getParent(i) >= 1) {
            printf("parent key = %d, ", arr[getParent(i)]);
        }
        if (getLeft(i) <= size) {
            printf("left key = %d, ", arr[getLeft(i)]);
        }
        if (getRight(i) <= size) {
            printf("right key = %d, ", arr[getRight(i)]);
        }
        printf("\n");
    }

    free(arr);
    return 0;
}

int getParent(const int i) {
    return i / 2;
}

int getLeft(const int i) {
    return 2 * i;
}

int getRight(const int i) {
    return 2 * i + 1;
}
