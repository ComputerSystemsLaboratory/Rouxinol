#include <stdio.h>
#include <iostream>

using namespace std;

struct data
{
    int num;
    int ini;
    char c;
};

void swap(struct data *a, struct data *b)
{
    struct data temp = *a;
    *a = *b;
    *b = temp;
}

int partition(struct data A[], int p, int r)
{
    int x = A[r].num;
    int i = p - 1;
    for (int j = p; j < r; j++)
    {
        if (A[j].num <= x)
        {
            i++;
            swap(&A[i], &A[j]);
        }
    }
    swap(&A[i + 1], &A[r]);
    return i + 1;
}

void quicksort(struct data A[], int p, int r)
{
    if (p < r)
    {
        int q = partition(A, p, r);
        quicksort(A, p, q - 1);
        quicksort(A, q + 1, r);
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    struct data array[n];
    for (int i = 0; i < n; i += 1)
    {
        //printf("%d\n", i);
        //scanf("%c %d", &array[i].c, &array[i].num);
        cin >> array[i].c >> array[i].num;
        array[i].ini = i;
    }

    quicksort(array, 0, n - 1);

    int f = 1;
    for (int i = 1; i < n; i++)
    {
        if (array[i - 1].num < array[i].num || (array[i - 1].num == array[i].num && array[i - 1].ini < array[i].ini))
        {
            continue;
        }
        else
        {
            f = 0;
            break;
        }
    }
    if (f)
    {
        puts("Stable");
    }
    else
    {
        puts("Not stable");
    }

    for (int i = 0; i < n; i++)
    {
        printf("%c %d\n", array[i].c, array[i].num);
    }

    return 0;
}
