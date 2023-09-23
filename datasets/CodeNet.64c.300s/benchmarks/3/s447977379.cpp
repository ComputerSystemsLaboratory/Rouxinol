#include <iostream>
using namespace std;
int main () {
	int a[101],n;
	cin >> n;
	for(int i=0;i<n;i++) cin>>a[i];
	for (int i=n-1;i>0;i--){
		cout << a[i]<<' ';
			} cout<<a[0]<<endl;
	return 0;
}
