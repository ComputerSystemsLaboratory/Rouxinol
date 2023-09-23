#include <bits/stdc++.h>

using namespace std;
int N, temp, swaps = 0;
int arr[100];
void SelectionSort(int *arr, int n, bool stable = 0)
{
    for (int i = 0; i < n - 1; i++)
    {
        int minIdx = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minIdx])
            {
                minIdx = j;
            }
        }
        if (stable)
        {
            int key = arr[minIdx];
            while (minIdx > i)
            {
                arr[minIdx] = arr[minIdx - 1];
                --minIdx;
            }
            arr[i] = key;
        }
        else

            if (arr[i] > arr[minIdx])
            {
                swaps = swaps + 1;
                temp = arr[i];
                arr[i] = arr[minIdx];
                arr[minIdx] = temp;
            }
        //swap(arr[i],arr[minIdx]);
    }
}
int main()
{
    //freopen("in.txt", "r", stdin);
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }
    SelectionSort(arr, N);

    for (int k = 0; k < N - 1; k++)
        cout << arr[k] << char(0x20);
    cout << arr[N - 1] << endl;
    cout << swaps;
    cout << endl;
    return 0;
}
