#include <iostream>
using namespace std;

#define INFTY 2000000000

int cnt = 0;

void merge(int S[], int left, int mid, int right)
{
    int n1 = mid - left;
    int n2 = right - mid;

    int L[n1], R[n2];

    for (int i = 0; i < n1; i++)
    {
        L[i] = S[left + i];
    }

    for (int i = 0; i < n2; i++)
    {
        R[i] = S[mid + i];
    }

    L[n1] = INFTY;
    R[n2] = INFTY;

    int i = 0;
    int j = 0;
    for (int k = left; k < right; k++)
    {
        cnt++;
        if (L[i] <= R[j])
        {
            S[k] = L[i];
            i = i + 1;
        }
        else 
        {
            S[k] = R[j];
            j = j + 1;
        }
     }
}

void mergeSort(int S[], int left, int right)
{
  if (left+1 < right)
  {
    int mid = (left + right)/2;;
    mergeSort(S, left, mid);
    mergeSort(S, mid, right);
    merge(S, left, mid, right);
  }
}

int main ()
{
    int N;
    cin >> N;

    int S[N];

    for (int i = 0; i < N; i++)
    {
        cin >> S[i];
    }

    mergeSort(S,0,N);

    for (int i = 0; i < N; i++)
    {
        if (i != 0)
            cout << " ";
        cout << S[i];
    }

    cout << endl;

    cout << cnt << endl;

    return 0;
}

