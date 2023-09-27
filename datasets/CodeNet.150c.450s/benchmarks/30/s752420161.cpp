#include<iostream>

using namespace std;

int main(){
	int n,count=0;
	cin >>n;
	int a[n];
	for(int i= 0;i<n;i++){
		cin >> a[i];
	}
	for(int i = 0;i<n;i++){
		int min = a[i];
		int min_num;
		bool flag = false;
		for(int j=i;j<n;j++){
			if(min >a[j]){
				min = a[j];
				min_num = j;
				flag = true;
			}
		}
		if(flag){
			int temp = a[i];
			a[i] = min;
			a[min_num] = temp;
			count++;
		}
	}
	for(int k= 0;k<n-1;k++){
		cout<< a[k] << ' ';
	}
	cout << a[n-1] << endl;
	cout << count << endl;
	return 0;
}
	