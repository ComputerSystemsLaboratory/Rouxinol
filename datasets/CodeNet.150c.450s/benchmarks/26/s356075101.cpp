#include<iostream>
#include<algorithm>
using namespace std;

int main() {
	int a, b;
	scanf("%d", &a);
	scanf("%d", &b);

	printf("%s", "a");
	if (a < b) {
		printf(" < ");
	} else if(a == b) {
		printf(" == ");
	}
	else {
		printf(" > ");
	}
	printf("%s", "b");

	cout << endl;
	return 0;
}