#include<iostream>

int main() {

	int n;

	int a[1000];

	int b[1000];

	for (int i = 0; i < 1000; i++){
		a[i] = 0;
	b[i] = 0;
}

	int x, y;

	int j=0;

	f:

	std::cin >> n;

	if (n == 0)
		goto flag;

	for (int i = 0; i < n; i++) {
		std::cin >> x >> y;
		if (x > y)
			a[j] += (x + y);
		if (x < y)
			b[j] += (x + y);
		if (x == y){
			a[j] += x;
		b[j] += y;
	}
	}

	j++;

	goto f;

flag:

	for(int i=0;i<j;i++)
	std::cout << a[i] << ' ' << b[i] << std::endl;

	return 0;

}