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

int main()
{
	int n;int k = 0;
	cin >> n;
	
	vector<int> A(n);
	for (int i = 0; i < n; i++)
	{
		cin >> A[i];
		k = max(k, A[i]);
	}
	vector<int> C(k + 1);
	vector<int> B(n + 1);


	for (int j = 0; j < n; j++)
	{
		C[A[j]]++;
	}
	for (int i = 1; i <= k; i++)
	{
		C[i] += C[i - 1];
	}
	for (int j = 0 ; j < n; j++)
	{
		B[--C[A[j]]] = A[j];
	}

	for (int i = 0; i < n; i++)
	{
		cout << B[i];
		if (i < n -1)
		{
			cout << " ";
		}
		else
		{
			cout << endl;
		}
	}

	return 0;
}