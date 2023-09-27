#include <iostream>
#include <algorithm>
#include <cstdio>
#include <list>
#include <stack>
#include <vector>
#include <map>
#include <set>
#include <cstring>
#include <cmath>
#define M 500005
#define INF (1 << 30)
typedef long long ll;
using namespace std;

int arr[M];
ll cnt = 0;
int R[M / 2 + 2], L[M / 2 + 2];
void merge(int left, int mid,  int right)	//????????????
{
	if (right - left <= 1)
		return;
	int n1 = mid - left;
	int n2 = right - mid;
	for (int i = 0; i < n1; ++i)
		L[i] = arr[left + i];
	for (int i = 0; i < n2; ++i)
		R[i] = arr[mid + i];
	L[n1] = R[n2] = INF;
	int i = 0, j = 0;
	for (int k = left; k < right; ++k)
	{
		if (L[i] <= R[j])
		{
			arr[k] = L[i++];
		}
		else
		{
			cnt += n1 - i;
			arr[k] = R[j++];
		}
	}
}

void mergesort(int l, int r)
{
	if (r - l <= 1)
		return;
	int mid = (l + r) / 2;
	mergesort(l, mid);
	mergesort(mid, r);
	merge(l, mid, r);
}


int main()
{
	//freopen("in.txt", "r", stdin);
	//freopen("out.txt", "w", stdout);
	int n;
	cin >> n;
	for (int i = 0; i < n; ++i)
		scanf("%d", &arr[i]);
	cnt = 0;
	mergesort(0, n);
	cout << cnt << endl;
	return 0;
}