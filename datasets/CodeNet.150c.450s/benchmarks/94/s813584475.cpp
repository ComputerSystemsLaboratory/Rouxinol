#include <iostream>
using namespace std;

int main(){
	int n,x,count = 0;
	int a[101] = {};
	cin >> n;
	for(int i = 0;i < n;i++){
		cin >> x;
		a[i] = x;
	}
	bool flag = true;
	while(flag){
		flag = 0;
		for(int j = n-1;j > 0;j--){
			if(a[j] < a[j-1]){
			swap(a[j],a[j-1]);
			flag = 1;
			count++;
			}
		}
	}
	for(int i = 0;i < n;i++){
		if(i == n-1)cout << a[i] <<endl;
		else cout << a[i] << " ";
	}
	cout << count << endl;

	return 0;
}