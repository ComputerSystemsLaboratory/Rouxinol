#include <iostream>
#include <vector>
using namespace std;

long long ans = 0;

long long merge(vector<int> &A, int left, int mid, int right)
{
    int n1 = mid + 1 - left;
    int n2 = right - mid;
    vector<int> L(n1 + 1);
    vector<int> R(n2 + 1);

    for (int i = 0; i < n1; i++)
    {
        L[i] = A[left + i];
    }
    for (int i = 0; i < n2; i++)
    {
        R[i] = A[mid + 1 + i];
    }
    L[n1] = R[n2] = 1e9 + 7;

    long long cnt = 0;
    int i = 0, j = 0;
    for (int k = left; k <= right; k++)
    {
        if (R[j] < L[i])
        {
            A[k] = R[j];
            j++;
            cnt += n1 - i;
        }
        else
        {
            A[k] = L[i];
            i++;
        }
    }

    return cnt;
}

void mergeSort(vector<int> &A, int left, int right)
{
    if (left < right)
    {
        int mid = (left + right) / 2;
        mergeSort(A, left, mid);
        mergeSort(A, mid + 1, right);
        long long x = merge(A, left, mid, right);

        // cout << x << endl;
        // for (auto a : A)
        // {
        //     cout << a << " ";
        // }
        // cout << endl;

        ans += x;
    }

    return;
}

int main()
{
    int n;
    cin >> n;

    vector<int> A(n);
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }

    mergeSort(A, 0, n - 1);

    cout << ans << endl;

    return 0;
}
