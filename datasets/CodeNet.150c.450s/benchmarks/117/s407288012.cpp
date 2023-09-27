#include <cstdio>
#include <iostream>
using namespace std;

int MargeElem(int elem[], int start, int mid, int end)
{
    int i, j, k, l;
    int num = 0;
    int A[250001], B[250001];
    i = mid - start;
    j = end - mid;
    l = (i > j) ? i : j;
    for (k = 0; k < l; k++) {
        A[k] = elem[start+k];
        B[k] = elem[mid+k];
    }
    A[i] = 0x7FFFFFFF;
    B[j] = 0x7FFFFFFF;

    i = 0;
    j = 0;
    for (k = start; k < end; k++) {
        ++num;
        if (A[i] <= B[j]) {
            elem[k] = A[i];
            ++i;
        }
        else {
            elem[k] = B[j];
            ++j;
        }
    }

    return num;
}

int MargeSort(int elem[], int start, int end)
{
    int mid;
    int cnt = 0;

    if ((start + 1) >= end) {
        return 0;
    }

    mid = (start + end) / 2;
    cnt += MargeSort(elem, start, mid);
    cnt += MargeSort(elem, mid, end);
    cnt += MargeElem(elem, start, mid, end);

    return cnt;
}

int main(void)
{
    int i;
    int num;
    int cnt;
    int elem[500002];

    scanf("%d", &num);
    for (i = 0; i < num; i++) {
        scanf("%d", &elem[i]);
    }

    cnt = MargeSort(elem,0, num);

    printf("%d", elem[0]);
    for (i = 1; i < num; i++) {
        printf(" %d", elem[i]);
    }
    printf("\n%d\n", cnt);

    return 0;
}