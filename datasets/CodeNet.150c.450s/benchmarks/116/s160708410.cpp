#include <iostream>
using namespace std;
const int SIZE=100001;
int a[SIZE]={00},b[SIZE]={00},c[SIZE]={00};

int main() {
	while(true){
		int n=0,k=0;
		cin >> n >> k;
		if(n==0) break;
		int max;
		for(int i=1;i<=n;i++){
			cin >> a[i];
		}
		for(int i=1;i<=n;i++){
			b[i]=b[i-1]+a[i];
		}
		for(int i=0;i<=n-k;i++){
			c[i]=b[i+k]-b[i];
		}
		max=c[1];
		for(int i=0;i<n;i++){
			if(max<c[i]){
				max=c[i];
			}
		}
		cout << max << endl;
	}
	return 0;
}