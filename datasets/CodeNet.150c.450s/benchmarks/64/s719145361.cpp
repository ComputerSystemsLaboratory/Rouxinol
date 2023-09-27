#include <iostream>
#include <algorithm>

using namespace std;

int A[2000];
int n, q, m;
int t=0;

bool solve(int j){
	if (j==n) return false;
	t += A[j];
	if (t==m) return true;
	if (t<m){
		if (solve(j+1)) return true;
	}
	t -= A[j];
	return solve(j+1);
}

bool solve2(int m, int j)
{
	if (j==n) return false;
	if (m==A[j])return true;
	if (solve2(m-A[j], j+1))return true;
	return solve2(m,j+1);
}

int main(){
	cin >> n;
	for (int i=0;i<n;i++) cin >> A[i];
	sort(A, A+n, [](int a,int b){return a>b;});
	cin >> q;
	for (int i=0;i<q;i++) {
		t = 0;
		cin >> m;
		cout << (solve2(m,0) ? "yes" : "no") << endl;
	}
}