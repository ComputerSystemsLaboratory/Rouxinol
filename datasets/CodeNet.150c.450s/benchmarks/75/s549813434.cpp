#include <cstdio>
#include <iostream>
using namespace std;

static const int MAX_NUM = 500001;

void MaxUp(int elem[], int num, int target)
{
    int left, right;
    int largest = target;

    left  = target * 2;
    right = left + 1;

    if (right <= num) {
        if (elem[largest] < elem[right]) {
            largest = right;
        }
        if (elem[largest] < elem[left]) {
            largest = left;
        }
    }
    else {
        if (left <= num) {
            if (elem[largest] < elem[left]) {
                largest = left;
            }
        }
    }

    if (largest != target) {
        swap(elem[target], elem[largest]);
        MaxUp(elem, num, largest);
    }

    return;
}

void MakeHeap(int elem[], int num)
{
    int i;

    for (i = num / 2; i >= 1; i--) {
        MaxUp(elem, num, i);
    }

    return;
}

int main(void)
{
    int i;
    int num;
    int elem[MAX_NUM];

    scanf("%d", &num);
    for (i = 1; i <= num; i++) {
        scanf("%d", &elem[i]);
    }

    MakeHeap(elem, num);

    for (i = 1; i <= num; i++) {
        printf(" %d", elem[i]);
    }
    printf("\n");

    return 0;
}