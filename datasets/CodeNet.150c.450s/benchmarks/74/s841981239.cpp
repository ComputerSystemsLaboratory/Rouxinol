#include <iostream>
#include <iostream>
using namespace std;
int main(){
	int n=0,m=0,c=0,a[500001]={};
	cin >> n >> m;
	for (int i=1; i<=n; i++){
		a[i]=i;
	}
	for (int i=0; i<m; i++){
		cin >> c;
		a[c]=1;
	}
	for (int i=3; i<=n; i++){
		for (int j=1; j<i/2+2; j++){
			if (a[i]>a[j]+a[i-j]) a[i]=a[j]+a[i-j];
		}
	}
	cout << a[n] << endl;
}