#define _CRT_SECURE_NO_WARNINGS
#include <algorithm>
#include <functional>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <string>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <vector>
#include <list>
#include <stack>
#include <queue>
#include <map>
#include <set>
#include <bitset>
#include <climits>
#include <iterator>
 
#define all(c) (c).begin(), (c).end()
#define rep(i,n) for(int i=0;i<(n);i++)
#define pb(e) push_back(e)
#define mp(a, b) make_pair(a, b)
#define fr first
#define sc second
 
const int INF=100000000;
int dx[4]={1,0,-1,0};
int dy[4]={0,1,0,-1};
using namespace std;
typedef pair<int ,int > P;
typedef long long ll;
ll cnt;

void m(vector < ll > &A, int left, int mid, int right)
{
	int n1 = mid - left;
	int n2 = right - mid;
	vector<ll> L(n1 + 1), R(n2 + 1);
	rep(i, n1) L[i] = A[left + i];
	rep(i, n2) R[i] = A[mid + i];
	L[n1] = 10e9 + 7;
	R[n2] = 10e9 + 7;
	int i = 0, j = 0;

	for (int k = left; k < right ; k++)
	{
		if (L[i] <= R[j])
		{
			A[k] = L[i];
			i++;
		}
		else
		{
			A[k] = R[j];
			j++;
		}
		cnt++;
	}
}

void mergeSort(vector<ll> &A, int left, int right)
{
	if (left + 1 < right)
	{
		int mid = (left + right) / 2;
		mergeSort(A, left, mid);
		mergeSort(A, mid, right);
		m(A, left, mid, right);
	}
}

int main()
{
	int n; cin >> n;
	vector < ll > A(n);
	rep(i, n)cin >> A[i];
	mergeSort(A, 0, n);
	
	//copy(all(A), std::ostream_iterator<int>(cout, " "));
	cout << A[0];
	for (int i = 1; i < n; i++)
	{
			cout << " " << A[i];
	}
	cout << endl << cnt << endl;
	return 0;
}