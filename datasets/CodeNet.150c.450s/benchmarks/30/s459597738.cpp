#include<iostream>
using namespace std;

int main(){
	int n,a[100],t,num,sum=0;
	cin >> n;
	for(int i=0;i<n;i++)cin >> a[i];

	for(int i=0;i<n;++i){
		int min = 100;
		for(int j=i;j<n;++j){
			if(a[j]<min){
				min = a[j];
				num = j;
			}
		}
		if(num != i){
			t = a[i];
			a[i] = a[num];
			a[num] = t;
			sum++;
		}
		if(i<n-1)cout << a[i] << " ";
	}

	cout << a[n-1] << "\n" << sum << endl;
	return 0;
}