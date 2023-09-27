/*
 * Problem Description: Heaps - Maximum Heap
 * Category:
 * Author: Khan
 * Date: 17th October, 2017
 */

#include <iostream>
using namespace std;
#define MAXN 2000000

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

int main(int argc, char const *argv[])
{
    //freopen("sample.txt", "r", stdin);
    cin >> H;
    for (int i = 1; i <= H; ++i)
        cin >> A[i];
    for (int i = H / 2; i >= 1; --i)
    {
        maxHeapify(i);
    }
    for (int i = 1; i <= H; ++i)
    {
        cout << " " << A[i];
    }
    cout << endl;
    return 0;
}