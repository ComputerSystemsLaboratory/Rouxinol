#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
using namespace std;

int partition(vector<pair<char, int>> &V, int left, int right)
{
    int i = left - 1;
    int x = V[right].second;
    for (int j = left; j < right; j++)
    {
        if (V[j].second <= x)
        {
            swap(V[++i], V[j]);
        }
    }
    swap(V[++i], V[right]);

    return i;
}

void quickSort(vector<pair<char, int>> &V, int left, int right)
{
    if (left < right)
    {
        int q = partition(V, left, right);
        quickSort(V, left, q - 1);
        quickSort(V, q + 1, right);
    }
}

void merge(vector<pair<char, int>> &V, int left, int mid, int right)
{
    int n1 = mid - left + 1;
    int n2 = right - mid;
    vector<pair<char, int>> L(n1 + 1), R(n2 + 1);
    for (int i = 0; i < n1; i++)
    {
        L[i] = V[left + i];
    }
    for (int i = 0; i < n2; i++)
    {
        R[i] = V[mid + 1 + i];
    }
    L[n1].first = R[n2].first = '*';
    L[n1].second = R[n2].second = 1e9 + 7;

    int i = 0, j = 0;
    for (int k = left; k <= right; k++)
    {
        if (L[i].second <= R[j].second)
        {
            V[k] = L[i++];
        }
        else
        {
            V[k] = R[j++];
        }
    }

    // cout << "####################" << endl;
    // for (auto p : V)
    // {
    //     cout << p.first << " " << p.second << endl;
    // }
}

void mergeSort(vector<pair<char, int>> &V, int left, int right)
{
    if (left < right)
    {
        int mid = (left + right) / 2;
        mergeSort(V, left, mid);
        mergeSort(V, mid + 1, right);
        merge(V, left, mid, right);
    }
}

int main()
{
    int n;
    cin >> n;

    vector<pair<char, int>> A(n);
    for (int i = 0; i < n; i++)
    {
        cin >> A[i].first >> A[i].second;
    }

    vector<pair<char, int>> B(n);
    copy(A.begin(), A.end(), B.begin());

    quickSort(A, 0, n - 1);
    mergeSort(B, 0, n - 1);

    bool flag = true;
    for (int i = 0; i < n; i++)
    {
        if (A[i].first != B[i].first || A[i].second != B[i].second)
        {
            flag = false;
            break;
        }
    }

    if (flag)
    {
        cout << "Stable" << endl;
    }
    else
    {
        cout << "Not stable" << endl;
    }
    for (int i = 0; i < n; i++)
    {
        cout << A[i].first << " " << A[i].second << endl;
    }

    return 0;
}
