#include <iostream>

using namespace std;

int main() {
	int a[31];
	for(int i=0;i<31;i++){
		a[i] = i;
	}
	int w,n;
	cin >> w;
	cin >> n;
	int k,l;
	while(scanf("%d,%d",&k,&l)+1){
		a[0] = a[k];
		a[k] = a[l];
		a[l] = a[0];
	}
	for(int i=1;i<=w;i++){
		cout << a[i] << endl;
	}
	return 0;
}