#include <bits/stdc++.h>
using namespace std;
#define MMAX 2147483647
typedef long long llong;
void merge(int *array, int left, int med, int right, llong &ans)
{
    int lside = med - left;
    int rside = right - med;
    int L[lside + 1], R[lside + 1];
    copy(&array[left], &array[med], L);
    copy(&array[med], &array[right], R);
    L[lside] = MMAX;
    R[rside] = MMAX;
    /*for (int i = left; i < med; ++i)
    {
        for (int j = med; j < right; ++j)
        {
            if (array[j] < array[i])
                ans++;
        }
    }*/
    int li = 0, ri = 0;
    for (int i = left; i < right; ++i)
    {
        if (L[li] <= R[ri])
            array[i] = L[li++];
        else
        {
            array[i] = R[ri++];
            ans += (lside - li);
        }
    }
}
void mgst(int *array, int left, int right, llong &ans)
{
    int med = (left + right) / 2;
    if (left + 1 < right)
    {
        mgst(array, left, med, ans);
        mgst(array, med, right, ans);
        merge(array, left, med, right, ans);
    }
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    llong ans(0);
    for (int i = 0; i < n; ++i)
        cin >> a[i];
    mgst(a, 0, n, ans);
    cout << ans << endl;
}
