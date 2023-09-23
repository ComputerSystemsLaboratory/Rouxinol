#include <iostream>
#define MAX_N 100

using namespace std;
int main(void){
	int a[MAX_N],n;
	cin >> n;
	for (int i=0;i<n;i++) cin >> a[i];
	for (int i=n-1;i!=0;i--) cout << a[i] << ' ';
	cout << a[0] << endl;
}