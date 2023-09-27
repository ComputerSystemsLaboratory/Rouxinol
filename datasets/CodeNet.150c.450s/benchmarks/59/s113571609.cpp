#include <algorithm>
#include <iostream>
using namespace std;
int main()
{
    int N;
    cin >> N;

    int A[110];
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }

    int v;
    int j;

    for (int i = 0; i < N; i++)
    {
        v = A[i];
        j = i - 1;
        while (j >= 0 && A[j] > v)
        {
            A[j + 1] = A[j];
            j--;
        }
        A[j + 1] = v;
        for (int i = 0; i < N; i++)
        {
            cout << A[i];
            if(i != N-1) cout << " ";
        }
        cout << "" << endl;
     }
}
