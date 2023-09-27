#include <iostream>
using namespace std;

int main() {
	while(1){
	int a[100000];int n,m;int b[100000];int p=0;
	cin >> n >> m;
	if(n ==0&&m == 0){break;}
	for(int i = 0;i<n;i++){
		cin >> a[i];
	}
	for(int i = 0;i<100000;i++){
		b[i]=0;
	}
	for(int i = 0;i<n-m;i++){
		if(a[i]>a[i+m]){
			for(int k = i;k<i+m;k++){
				b[p]+=a[k];
			}
			p++;
		}
	}
	for(int k = n-m;k<n;k++){
				b[p]+=a[k];
	}
	for(int i = 1;i<100000;i++){
		if(b[0]<b[i]){b[0]=b[i];}
	}
	cout << b[0]<<endl;
}
	return 0;
}