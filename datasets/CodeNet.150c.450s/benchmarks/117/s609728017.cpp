#include <iostream>

using namespace std;

int b[500099], n = 0, ans = 0;

void Merge(int a[], int l, int r){
    int m = (l + r) / 2;
    int i = l, j = m + 1, sum[r - l + 1], cnt = -1;
    ans += r - l + 1;
    while (i <= m && j <= r){
        if (a[i] < a[j])
            sum[++cnt] = a[i++];
        else
            sum[++cnt] = a[j++];
    }
    while (i <= m)  sum[++cnt] = a[i++];
    while (j <= r)  sum[++cnt] = a[j++];
    for (int i = l; i <= r; i++)
        a[i] = sum[i - l];
}

void Merge_sort(int a[], int l, int r){
    if (l < r){
        int m = (l + r) / 2;
        Merge_sort(a, l, m);
        Merge_sort(a, m + 1, r);
        Merge(a, l, r);
    }
}

int main()
{
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> b[i];
    Merge_sort(b, 0, n - 1);
    for (int i = 0; i < n - 1; i++)
        cout << b[i] << " ";
    cout << b[n - 1] << endl;
    cout << ans << endl;
    return 0;
}

