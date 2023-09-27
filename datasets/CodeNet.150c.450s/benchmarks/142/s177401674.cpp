#include <bits/stdc++.h>
using namespace std;

int main(){
int n, k;
cin >> n >> k;
int arr[n];
for(int i = 0; i < n; i++){
cin >> arr[i];
}
for(int i = 0 ; i < n; i++){
if (i >= k){
	if(arr[i] > arr[i - k]){
	cout << "Yes" << endl;
	} else {
	cout << "No" << endl;
		}
	}
}


}
