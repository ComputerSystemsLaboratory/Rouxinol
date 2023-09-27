#include<stdio.h>
#include<iostream>
#include<math.h>
#include<algorithm>
#include<string>
using namespace std;

int main() {
	int a[10] = {0}, i = -1, n;
	while(cin >> n) {
		if(n == 0) {
			cout << a[i--] <<endl;
		} else{
			i++;
			a[i] = n;
		}
	}
	return 0;
}