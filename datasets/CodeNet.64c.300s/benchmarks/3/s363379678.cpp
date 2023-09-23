#include <iostream>
using namespace std;
 
int main() {
	int n,a[110];
	cin>>n;
	for (int i=0;i<n;i++){
		cin>>a[i];
	}
	for (int j=n-1;j>=0;j--){
		cout<<a[j];
		if (j>0){
			cout<<" ";
		}
	}
	cout<<endl;
}
