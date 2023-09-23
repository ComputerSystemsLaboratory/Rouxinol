#include <iostream>
#include <string>
using namespace std;

void ins(int [],int);

int main(){
	int n,a[100];
	cin >> n;
	for(int i=0;i<n;i++) cin >>a[i];
	for(int k=0;k<n;k++){
		cout << a[k];
		if(k!=n-1) cout << " ";
	}
	cout << endl;
	ins(a,n);

	return 0;
}

void ins(int a[],int n){
	int w;
	for(int i=1;i<n;i++){
		for(int j=i-1;j>=0;j--){
			if(a[j+1] > a[j]) break;
			w=a[j+1];
			a[j+1]=a[j];
			a[j]=w;
		}
	for(int k=0;k<n;k++){
		cout << a[k];
		if(k!=n-1) cout << " ";
	}
	cout << endl;
	}
}