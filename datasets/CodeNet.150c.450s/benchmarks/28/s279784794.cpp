#include <iostream>
using namespace std;

inline bool isOK(int P, int n, int k, int w[]){
	int wt=0, cnt=1;
	
	for(int i=0; i<n; i++){
		if( wt + w[i] <= P && cnt <= k){
			wt += w[i];
		} else if (w[i] <= P && cnt <= k-1){
			wt = w[i];
			cnt++;
		} else{
			return false;
		}
	}
	return true;
}



int main(){
	ios::sync_with_stdio(false);
	
	int n, k;
	cin >> n >> k;
	int w[n];
	
	for(int i=0; i<n; i++){
		cin >> w[i];
	}
	
	int left=0, right=1e9;
	while(left < right){
		int mid = (left + right)/2;
		if(isOK(mid, n, k, w)){
			right = mid;
		} else{
			left = mid + 1;
		}
	}
	cout << left << "\n";
}