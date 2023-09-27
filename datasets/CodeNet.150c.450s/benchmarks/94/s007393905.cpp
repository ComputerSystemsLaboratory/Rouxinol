#include<iostream>
using namespace std;

int main(){
	int n,t,a[100],sum = 0;
	cin >> n;
	for(int i = 0;i<n;i++)cin >> a[i];
	if(n==1)cout << a[0] << "\n" << "0" << endl;
	else{
		for(int i = 0;i<n;i++){
			for(int j = 0;j<n-1;j++){
				if(a[j]>a[j+1]){
					t = a[j];
					a[j] = a[j+1];
					a[j+1] = t;
					sum++;
				}
			}
		}
	for(int i = 0;i<n-1;++i)cout << a[i] << " " ;
	cout << a[n-1] << "\n" << sum << endl;
	}

	return 0;
}