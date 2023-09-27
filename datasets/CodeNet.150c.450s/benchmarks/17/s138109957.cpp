#include<iostream>
#include<algorithm>
using namespace std;
double a[5];

int main(){
	for (int i = 0; i < 5; i++){
		cin >> a[i];
	}
	sort(a, a + 5);
	cout << a[4] << " " << a[3] << " " << a[2] << " " << a[1] << " " << a[0] << endl;


	return 0;
}