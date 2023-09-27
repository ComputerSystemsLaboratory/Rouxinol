#include <bits/stdc++.h>
using namespace std;

#define is_uruu leapyear
#define ll long long
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define ROF(i,a,b) for(int i=(a);i>(b);--i)
#define REP(i,a) for(int i=0;i<(a);++i)

int partition(int A[], int p, int r){
	int x = A[r];
	int i = p;
	FOR(j, p, r){
		if(A[j] <= x){
			swap(A[j], A[i]);
			i++;
		}
	}
	swap(A[i], A[r]);
	return i;
}
	
int main(){
	
	int i, n, A[100005];
	cin >> n;
	FOR(j, 0, n){
		cin >> A[j];
	}
	
	i = partition(A, 0, n-1);
	
	FOR(j, 0, i) cout << A[j] << " ";
	cout << "[" << A[i] << "] " ;
	FOR(j, i+1, n-1) cout << A[j] << " ";
	cout << A[n-1] << endl;
	
	return 0;
}
