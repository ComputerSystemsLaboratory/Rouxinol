#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
using namespace std;
const int INF = 0x3f3f3f3f;
const int MAXN = 100005;

int parent(int u) { return u / 2; }
int left(int u) { return u * 2; }
int right(int u) { return u * 2 + 1; }

int main(){
	int n, A[MAXN];
	cin >> n;
	for(int i = 1; i <= n; i++)
		cin >> A[i];
	for(int i = 1; i <= n; i++){
		cout << "node " << i << ": key = " << A[i] << ", ";
		if(i > 1)
			cout << "parent key = " << A[parent(i)] << ", ";
		if(left(i) <= n)
			cout << "left key = " << A[left(i)] << ", ";
		if(right(i) <= n)
			cout << "right key = " << A[right(i)] << ", ";
		cout << endl;

	}
	return 0;
}