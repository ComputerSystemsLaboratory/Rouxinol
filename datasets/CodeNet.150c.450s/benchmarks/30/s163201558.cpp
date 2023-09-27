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
    int minid = i;
		for(int j=i;j<N;j++){
			if(a[minid]>a[j]){
        minid = j;
			}
		}
    if(minid != i){
      swap(a[i],a[minid]);
      ans++;
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

