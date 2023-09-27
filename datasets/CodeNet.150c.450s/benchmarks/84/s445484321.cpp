#include <iostream>
#include <algorithm>

#define MAX 2000000
#define SENTINEL 2000000000
int L[MAX / 2 + 2], R[MAX / 2 + 2];

long long superBubbleSort(int A[], int left, int mid, int right)
{
    int i, j;
    long long times = 0;

    //for (int i = left; i < right; i++) std::cout << A[i] << " ";
    //std::cout << std::endl;

    int ln = mid - left;
    int rn = right - mid;

    for (i = 0; i < ln; i++) L[i] = A[left + i];
    for (i = 0; i < rn; i++) R[i] = A[mid + i];

    L[ln] = R[rn] = SENTINEL;
    
    i = j = 0;

    for (int k = left; k < right; k++)
    {
        if (L[i] <= R[j]) A[k] = L[i++];
        else
        {
            A[k] = R[j++];
            times += ln - i;
        }
    }

    return times;
}

long long bubbleManager(int A[], int left, int right)
{
    int mid;
    long long v1, v2, v3;
    if (left + 1 < right)
    {
        mid = (left + right) / 2;
        v1 = bubbleManager(A, left,   mid);
        v2 = bubbleManager(A,  mid, right);
        v3 = superBubbleSort(A, left, mid, right);

        return v1 + v2 + v3;
    }
    else return 0;
}

int main()
{
    int N;
    std::cin >> N;

    int *A = new int[N];
    for (int i = 0; i < N; i++) std::cin >> A[i];

    int left  = 0;
    int right = N;
    long long times = bubbleManager(A, left, right);

    //for (int i = 0; i < N; i++) std::cout << A[i] << " ";
    //std::cout << std::endl;

    std::cout << times << std::endl;
}
