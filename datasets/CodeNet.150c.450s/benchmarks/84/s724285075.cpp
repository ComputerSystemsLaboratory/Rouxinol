#include <cstdio>
#include <iostream>
using namespace std;

static const int MAX_NUM = 200000;

long long MargeElem(int elem[], int start, int mid, int end)
{
    long long ret = 0;
    int i, j, k, l;
    int A[MAX_NUM/2 + 1], B[MAX_NUM/2 + 1];

    i = mid - start;
    j = end - mid;
    k = (i > j) ? i : j;
    for (l = 0; l < k; l++) {
        A[l] = elem[start + l];
        B[l] = elem[mid + l];
    }
    A[i] = 0x7FFFFFFF;
    B[j] = 0x7FFFFFFF;

    k = 0;
    j = 0;
    for (l = start; l < end; l++) {
        if (A[k] > B[j]) {
            elem[l] = B[j];
            ++j;
            ret += (i - k);
        }
        else {
            elem[l] = A[k];
            ++k;
        }
    }

    return ret;
}

long long MargeSort(int elem[], int start, int end)
{
    int mid;
    long long ret = 0;

    if (start < end - 1) {
        mid = (start + end) / 2;
        ret  = MargeSort(elem, start, mid);
        ret += MargeSort(elem, mid,   end);
        ret += MargeElem(elem, start, mid, end);
    }

    return ret;
}


int main(void)
{
    int i;
    long long ret;
    int num;
    int elem[MAX_NUM];

    scanf("%d", &num);
    for (i = 0; i < num; i++) {
        scanf("%d", &elem[i]);
    }

    ret = MargeSort(elem, 0, num);
    printf("%ld\n", ret);

    return 0;
}