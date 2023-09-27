/*
 * Problem Description: Heaps - Priority Queue
 * Category:
 * Author: Khan
 * Date: 17th October, 2017
 */

#include <cstdio>
#include <cstring>
#include <algorithm>
#include <iostream>
using namespace std;
#define MAXN 2000000
#define INF (1 << 30)

int H, A[MAXN + 1];

void maxHeapify(int i)
{
    int l, r, largest;
    l = 2 * i;
    r = 2 * i + 1;

    if(l <= H && A[l] > A[i])
        largest = l;
    else
        largest = i;
    if(r <= H && A[r] > A[largest])
        largest = r;

    if(largest != i)
    {
        swap(A[i], A[largest]);
        maxHeapify(largest);
    }
}

int extract()
{
    int maxv;
    if(H < 1)
        return -INF;
    maxv = A[1];
    A[1] = A[H--];
    maxHeapify(1);
    return maxv;
}

void increaseKey(int i, int key)
{
    if(key < A[i])
        return;
    A[i] = key;
    while(i > 1 && A[i / 2] < A[i])
    {
        swap(A[i], A[i / 2]);
        i /= 2;
    }
}

void insert(int key)
{
    H++;
    A[H] = -INF;
    increaseKey(H, key);
}

int main(int argc, char const *argv[])
{
    //freopen("sample.txt", "r", stdin);
    int key;
    char cmd[10];
    while(true)
    {
        scanf("%s", cmd);
        if(cmd[0] == 'e' && cmd[1] == 'n')
            break;
        if(cmd[0] == 'i')
        {
            scanf("%d", &key);
            insert(key);
        }
        else
        {
            printf("%d\n", extract());
        }
    }
    return 0;
}