#include <cstdio>
#include <iostream>
using namespace std;

int Partition(int elem[], int start, int end)
{
    int i;
    int mid;
    int target;

    target = elem[end - 1];
    mid    = start - 1;

    for (i = start; i < end - 1; i++) {
        if (elem[i] <= target){
            ++mid;
            swap(elem[mid], elem[i]);
        }
    }

    ++mid;
    swap(elem[mid], elem[end-1]);

    return mid;
}

int main(void)
{
    int i;
    int target;
    int num;
    int elem[100000];
    int left, right;

    scanf("%d", &num);
    for (i = 0; i < num; i++) {
        scanf("%d", &elem[i]);
    }

    target = Partition(elem, 0, num);

    printf("%d", elem[0]);
    for (i = 1; i < num; i++) {
        if (i == target) {
            printf(" [%d]", elem[i]);
        }
        else {
            printf(" %d", elem[i]);
        }
    }
    printf("\n");

    return 0;
}