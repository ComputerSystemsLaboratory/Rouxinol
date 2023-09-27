#include <iostream>
#include <vector>
using namespace std;

void MaxHeapify(vector<int> &A, int i)
{
    int H = A.size() - 1;
    int left = i * 2;
    int right = i * 2 + 1;

    int largest;
    if (left <= H && A[left] > A[i])
    {
        largest = left;
    }
    else
    {
        largest = i;
    }

    if (right <= H && A[right] > A[largest])
    {
        largest = right;
    }

    if (largest != i)
    {
        swap(A[i], A[largest]);
        MaxHeapify(A, largest);
    }
}

void BuildMaxHeap(vector<int> &A, int i)
{
    for (int j = (A.size() - 1) / 2; j > 0; j--)
    {
        MaxHeapify(A, j);
    }
}

int main()
{
    int H;
    cin >> H;

    vector<int> A(H + 1);
    for (int i = 1; i <= H; i++)
    {
        cin >> A[i];
    }

    BuildMaxHeap(A, H);

    for (int i = 1; i <= H; i++)
    {
        cout << " " << A[i];
    }
    cout << endl;

    return 0;
}
