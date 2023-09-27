#include <bits/stdc++.h>
using namespace std ; 
long long a[500005] , q ;
int n ;
void merge(int l , int mid , int r) {
	vector<int> L , R ;
	int nl = mid-l+1;
	int nr=r-mid;
	for(int i=0 ; i < nl ; i++) {
		L.push_back(a[l+i]) ; 
	}
	for(int i=0 ; i < nr ; i++) {
		R.push_back(a[mid+1+i]) ; 
	}	
	
//	cout << l << ' ' << mid << ' ' << r << endl;
//	for(int i = 0 ; i < L.size() ; i++) cout << L[i] << ' '; cout << endl;
//	for(int i = 0 ; i < R.size() ; i++) cout << R[i] << ' '; cout << endl;
	
	R.push_back(1e9+7) ;
	L.push_back(1e9+7) ;
	int i=0 , j=0; 
	for(int k=l ; k<=r ; k++) {
		if(L[i] < R[j]) {
			a[k]=L[i];
			i++;
		}
		else {
			a[k]=R[j];
			j++;
		}
		q++;
	}
}
void merge_sort(int l, int r){
	if( l < r ){
		int mid=( l+r ) / 2 ;
		merge_sort(l , mid);
		merge_sort(mid+1, r);
		merge(l , mid , r ) ;
	}	
}
int main() {
	 cin >> n ; 
	 for(int i=0 ; i<n ; i++) {
	 	cin >> a[i]  ; 
	 }
	 merge_sort(0 , n-1) ;
	  
	 for(int i=0; i<n ;i++) {
	 	cout << a[i];
	 	if(i != n-1) cout << " ";
	 }
	 cout << endl ;
	 cout << q << endl ;
}
