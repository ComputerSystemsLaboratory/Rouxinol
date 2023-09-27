#include <bits/stdc++.h>
using namespace std;

int Bubble(vector<int>& A) {
    const int N=A.size();
    int cnt=0;
    bool flag = 1; // ????????£??\????´?????????¨??????
    while(flag) {
	flag = 0;
	for(int j=N-1; j>=1; j--){
	    if(A[j] < A[j-1]) {
		swap(A[j],A[j-1]);
		flag = 1;
		cnt++;
	    }
	}
    }
    return cnt;
}

int main() {
    int n; cin >> n;
    vector<int> A(n);
    for(int i=0; i<n; i++) cin >> A[i];
    int ans = Bubble(A);
    for(int i=0; i<n; i++)
	if(i != n-1) 
	    cout << A[i] << " ";
	else
	    cout << A[i] << endl;

    cout << ans << endl;
}