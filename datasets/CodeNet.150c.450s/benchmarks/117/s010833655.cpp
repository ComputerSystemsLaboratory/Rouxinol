#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>

using namespace std;

int cnt;

void merge(vector<int>& v, int l, int m, int r)
{
    int nl = m - l;
    int nr = r - m;
    
    vector<int> v1(nl + 1);
    copy(v.begin() + l, v.begin() + m, v1.begin());
    vector<int> v2(nr + 1);
    copy(v.begin() + m, v.begin() + r, v2.begin());

    v1[nl] = numeric_limits<int>::max();
    v2[nr] = numeric_limits<int>::max();

    int i {};
    int j {};

    for (int k = l; k < r; ++k)
    {
        ++cnt;
        if (v1[i] <= v2[j])
            v[k] = v1[i++];
        else
            v[k] = v2[j++];
    }
    
}


void mergeSort(vector<int>& v, int l , int r)
{
    if (l + 1 < r)
    {
        int mid = (l + r) / 2;
        mergeSort(v, l, mid);
        mergeSort(v, mid, r);
        merge(v, l, mid, r);
    }
}

int main()
{
    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0, in; i < n && cin >> in; ++i)
        v[i] = in;

    mergeSort(v, 0, n);

    for (int i = 0; i < n; ++i)
    {
        cout << v[i] << (i != n - 1 ? " " : "");
    }

    cout << '\n' << cnt << endl;

    return 0;
}