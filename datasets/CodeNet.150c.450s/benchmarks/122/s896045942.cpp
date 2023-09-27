#include <stdio.h>
#include <iostream>
#include <utility>
#include <algorithm>
#include <math.h>
#include <vector>
using namespace std;
#define inf 2000000001

vector<int> S = {inf};

int parent(int i)
{
    return i / 2;
}

int left(int i)
{
    return 2 * i;
}

int right(int i)
{
    return 2 * i + 1;
}

void maxHeapify(vector<int> &A, int i)
{
    int l = left(i);
    int r = right(i);
    int largest;
    if (l <= S.size() - 1 && A[i] < A[l])
        largest = l;
    else
        largest = i;
    if (r <= S.size() - 1 && A[r] > A[largest])
        largest = r;

    if (largest != i)
    {
        swap(A[largest], A[i]);
        maxHeapify(A, largest);
    }
}

void insert(vector<int> &S, int k)
{
    int i = S.size();
    S.push_back(k);
    while (S[i] > S[i / 2])
    {
        swap(S[i], S[i / 2]);
        i /= 2;
    }
}

int extractMax(vector<int> &S)
{
    if (S.size() > 1)
    {
        int r = S[1];
        S[1] = S[S.size() - 1];
        S.pop_back();
        maxHeapify(S,1);
        return r;
    }
    else
    {
        return -1;
    }
}
int main()
{
    string str;
    int k;
    while (true)
    {
        cin >> str;
        if (str[0] == 'i')
        {
            cin >> k;
            insert(S, k);
        }
        else if (str[1] == 'x')
            printf("%d\n", extractMax(S));
        else if (str[1] == 'n')
            break;
    }

    return 0;
}
