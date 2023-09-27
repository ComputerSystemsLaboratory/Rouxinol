#include <iostream>
#include <vector>
using namespace std;
const long INF = 1e9;
const long MOD = 1e9 + 7;
#define repi(i, n, init) for (int i = init; i < int(n); i++)

long long merge(vector<int> &vec, int left, int mid, int right)
{
    int n1 = mid - left,
        n2 = right - mid;
    vector<int> L(n1 + 1), R(n2 + 1);
    repi(i, n1, 0)
    {
        L[i] = vec.at(left + i);
    }
    repi(i, n2, 0)
    {
        R[i] = vec.at(mid + i);
    }
    L[n1] = INF;
    R[n2] = INF;
    long long i = 0, j = 0, cnt = 0;
    repi(k, right, left)
    {
        if (L.at(i) <= R.at(j))
        {
            vec.at(k) = L.at(i);
            i++;
        }
        else
        {
            vec.at(k) = R.at(j);
            j++;
            cnt += mid + j - k - 1;
        }
    }
    return cnt;
}
long long mergeSort(vector<int> &vec, int left, int right)
{
    long long sum = 0;
    if (left + 1 < right)
    {
        int mid = (left + right) / 2;
        sum += mergeSort(vec, left, mid);
        sum += mergeSort(vec, mid, right);
        sum += merge(vec, left, mid, right);
    }
    return sum;
}
int main()
{
    int n;
    cin >> n;
    vector<int> s(n);
    repi(i, n, 0)
    {
        cin >> s[i];
    }
    long long cnt = mergeSort(s, 0, n);
    cout << cnt << endl;
    return 0;
}
