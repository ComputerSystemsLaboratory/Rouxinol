#include <utility>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    const int VALUES = 10000;

    int A[VALUES], B[VALUES], C = 0;

    while (true)
    {
        cin >> A[C] >> B[C];

        if (A[C] == 0 && B[C] == 0) { goto Exit; }

        if (A[C] > B[C]) { swap(A[C], B[C]); }

        C++;
    }

    Exit:;

    for (int i = 0; i < C; i++)
    {
        cout << A[i] << ' ' << B[i] << endl;
    }

    return 0;
}