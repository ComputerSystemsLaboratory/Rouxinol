#include <iostream>

using namespace std;

long long merge_sort(int *a, int l, int r)
{
    if (l == r - 1)
	return a[l] > a[r] ? (swap(a[l], a[r]), 1) : 0;
    else if (l == r)
	return 0;

    int mid = (l + r) / 2;
    long long cnt = 0;
    cnt += merge_sort(a, l, mid);
    cnt += merge_sort(a, mid + 1, r);

    int i = l, j = mid + 1, k = 0, ln = mid - l + 1, rn = r - mid + 1;
    int b[r - l + 1];
    while (i <= mid && j <= r) {
	if (a[i] < a[j]) {
	    b[k++] = a[i++];
	    ln--;
	}
	else {
	    b[k++] = a[j++];
	    cnt += ln;
	    rn--;
	}
    }
    while (i <= mid)
	b[k++] = a[i++];
    while (j <= r)
	b[k++] = a[j++];

    for (i = 0; i <= r - l; i++)
	a[l + i] = b[i];

    return cnt;
}


int main(void)
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
	cin >> a[i];

    cout << merge_sort(a, 0, n - 1) << endl;
    
    return 0;
}