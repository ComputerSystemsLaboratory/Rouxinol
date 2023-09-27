#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;
const long INF = 1e9;
const long MOD = 1e9 + 7;
#define repi(i, n, init) for (int i = init; i < int(n); i++)

struct TRUMP
{
    int number, order;
    char mark;
};

int partition(vector<TRUMP> &A, int p, int r)
{
    int x = A.at(r).number;
    int i = p - 1;
    repi(j, r, p)
    {
        if (A.at(j).number <= x)
        {
            i++;
            swap(A.at(i), A.at(j));
        }
    }
    swap(A.at(i + 1), A.at(r));

    return i + 1;
}

void quicksort(vector<TRUMP> &A, int p, int r)
{
    if (p < r)
    {
        int q = partition(A, p, r);
        quicksort(A, p, q - 1);
        quicksort(A, q + 1, r);
    }
}

int main()
{
    int n;
    cin >> n;
    vector<TRUMP> A;
    repi(i, n, 0)
    {
        TRUMP tmp;
        cin >> tmp.mark >> tmp.number;
        tmp.order = i;
        A.push_back(tmp);
    }
    quicksort(A, 0, n - 1);
    bool isStable = true;
    int j = 0;

    repi(i, n, 1)
    {
        if (A.at(i).order < A.at(i - 1).order && A.at(i).number == A.at(i - 1).number)
        {
            isStable = false;
        }
    }
    isStable ? puts("Stable") : puts("Not stable");
    repi(i, n, 0)
    {
        cout << A.at(i).mark << " " << A.at(i).number << endl;
    }
    return 0;
}
