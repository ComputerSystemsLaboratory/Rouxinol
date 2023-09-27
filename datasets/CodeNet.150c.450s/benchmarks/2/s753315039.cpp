#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;
const long INF = 1e9;
const long MOD = 1e9 + 7;
#define repi(i, n, init) for (int i = init; i < int(n); i++)

int partition(vector<int> &A, int p, int r)
{
    int x = A.at(r);
    int i = p - 1;
    repi(j, r, p)
    {
        if (A.at(j) <= x)
        {
            i++;
            swap(A.at(i), A.at(j));
        }
    }
    swap(A.at(i + 1), A.at(r));

    return i + 1;
}

int main()
{
    int n;
    cin >> n;
    vector<int> A(n);
    repi(i, n, 0)
    {
        cin >> A[i];
    }
    int p = partition(A, 0, A.size() - 1);
    repi(i, n, 0)
    {
        if (i != p)
        {
            cout << A.at(i) << ((i + 1) % n ? " " : "\n");
        }
        else
        {
            cout << "[" << A.at(i) << "] ";
        }
    }
    return 0;
}
