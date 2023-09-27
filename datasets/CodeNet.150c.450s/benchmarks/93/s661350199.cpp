#include <bits/stdc++.h>
using namespace std;
int partition(vector<pair<int, char> > &Array, int p, int last)
{
    int i = p - 1;
    for (int j = p; j < last; ++j)
    {
        if (Array[j].first <= Array[last].first)
        {
            i++;
            swap(Array[i], Array[j]);
        }
    }
    swap(Array[i + 1], Array[last]);
    return i + 1;
}
void quicksort(vector<pair<int, char> > &Array, int p, int last)
{
    if (p < last)
    {
        int q = partition(Array, p, last);
        quicksort(Array, p, q - 1);
        quicksort(Array, q + 1, last);
    }
}
int main()
{
    int n;
    cin >> n;
    vector<pair<int, char> > A;
    for (int i = 0; i < n; ++i)
    {
        int tmp;
        char c;
        cin >> c >> tmp;
        A.push_back(make_pair(tmp, c));
    }
    vector<pair<int, char> > B(A);
    quicksort(A, 0, n - 1);
    bool ans(true);
    for (int i = 0; i < n - 1; ++i)
    {
        for (int j = i + 1; A[i].first == A[j].first; ++j)
        {
            int t1, t2;
            for (int k = 0; k < n; ++k)
            {
                if (A[j - 1] == B[k])
                    t1 = k;
            }
            for (int k = 0; k < n; ++k)
            {
                if (A[j] == B[k])
                    t2 = k;
            }
            if (t1 > t2)
            {
                ans = false;
                break;
            }
        }
        if (!ans)
            break;
    }
    if (ans)
        cout << "Stable" << endl;
    else
    {
        cout << "Not stable" << endl;
    }

    for (int i = 0; i < n; ++i)
        cout << A[i].second << ' ' << A[i].first << endl;
}
