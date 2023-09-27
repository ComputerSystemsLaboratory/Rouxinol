#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main() {
	int data,j;
	char data_m[10],a[2]="3";
	cin >> data;
	for (int i = 1; i <= data; i++) {
		sprintf(data_m, "%d", i);
		if (i % 3 == 0||strstr(data_m,a)!=NULL) {
			cout << " " << i;
		}
	}
	cout << endl;
	return 0;
}