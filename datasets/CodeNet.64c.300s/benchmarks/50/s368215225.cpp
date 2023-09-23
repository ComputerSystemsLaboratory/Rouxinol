#include <iostream>
#include <utility>
using namespace std;

int main(void) {
	int n,a[100];
	cin >> n;
	for(int i = 0;i < n;i++) cin >> a[i];
	bool flag = true;
	int cnt = 0;
	while(flag) {
		flag = false;
		for(int j = n-1;j > 0;j--) {
			if(a[j]<a[j-1]) {
				swap(a[j],a[j-1]);
				flag = true;
				cnt++;
			}
		}
	}
	for(int i = 0;i < n-1;i++) cout << a[i] << " ";
	cout << a[n-1] << endl << cnt << endl;
}

