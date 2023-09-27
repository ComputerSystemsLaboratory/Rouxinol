#include <bits/stdc++.h>
using namespace std;


void swap(int& a, int& b){
	int tmp = a;
	a = b;
	b = tmp;
}

int main(){
	int N;cin >> N;
	int a[N];
	for(int i=0;i<N;i++){
		cin >> a[i];
	}
	int ans=0;
	for(int i=0;i<N;i++){
		for(int j=N-1;j>i;j--){
			if(a[j-1]>a[j]){
				swap(a[j-1],a[j]);
				ans++;
			}
		}
	}
	for(int i=0;i<N;i++){
		if(i == N-1) {
			cout << a[i] << endl;
		}else {
			cout << a[i] << " ";
		}
	}
	cout << ans << endl;
	return 0;
}

