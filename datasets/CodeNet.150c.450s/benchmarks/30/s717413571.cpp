#include <bits/stdc++.h>
using namespace std;


int SelectionSort(vector<int>& a) {
    int N = a.size();
    int ans=0;
    for(int i=0; i<N; i++) {
	int minj = i;
	for(int j=i; j<N; j++) {
	    if(a[j] < a[minj] )
		minj = j;
	}
	if( i != minj ) {
	    swap(a[i],a[minj]);
	    ans++;
	}
    }
    return ans;
}

int main() {
    int n; cin >>  n;
    vector<int> a(n);
    for(int i=0; i<n; i++) cin >> a[i];
    int ans = SelectionSort(a);

    for(int i=0; i<n; i++)
	if(i != n-1)
	    cout << a[i] << " ";
	else
	    cout << a[i] << endl;
    cout << ans << endl;
}