#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int n,count=0;
	int a[1001];
	int flag = 1;
	cin >> n;
	for (int i = 0; i < n; i++){
		cin >> a[i];
	}
	while (flag){
		flag = 0;
		for (int i = n - 1; i >= 1; i--){
			if (a[i] < a[i - 1]){
				swap(a[i], a[i - 1]);
				flag = 1;
				count++;
			}
		}
	}
	for (int i = 0; i < n; i++){
		if (i == n - 1)cout << a[i] << endl;
		else cout << a[i] << " ";
	}
	cout << count << endl;
}