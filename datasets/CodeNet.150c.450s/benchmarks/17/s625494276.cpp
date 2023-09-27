#include <iostream>
#include <algorithm>
#include <string>
#include <cmath>
#include <stack>
using namespace std;

int main(){
	int a[5];
	cin >> a[0] >> a[1] >> a[2] >> a[3] >> a[4];
	sort(a, a + 5, greater<int>());
	int i;
	for(i = 0; i < 4; i++)cout << a[i] << " ";
	cout << a[4] << endl;
}
