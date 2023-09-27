#include<bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int arr[10001];
	for (int i=0; i<10001; i++) arr[i] = 0;
	for (int i=1; i<100; i++) {
		for (int j=1; j<100; j++) {
			for (int k=1; k<100; k++) {
				if(i*i+j*j+k*k+i*j+i*k+j*k<=10000)
				arr[i*i+j*j+k*k+i*j+i*k+j*k]++;
			}
		}
	}
	int n;
	cin>>n;
	for (int i=1; i<=n; i++) cout<<arr[i]<<'\n';	
}
