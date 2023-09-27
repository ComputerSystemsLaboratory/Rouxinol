#include <cmath>
#include <iostream>
#include <vector>

using namespace std;

u_int make_prime_list(u_int a[], u_int size)
{
	a[0] = 2;
	a[1] = 3;
	
	u_int i = 2;

	for (u_int q = 5; q <= size; q+=2) {
		u_int threshold = (u_int)sqrt(q);
		bool is_prime = true;
		
		for (u_int j = 1; a[j] <= threshold; j++)
			if (q % a[j] == 0) {
				is_prime = false;
				break;
			}

		if (is_prime)
			a[i++] = q;
	}

	return i;
}

void prime_factorize(u_int const *prime_list, vector<u_int> *a,
					 u_int n, u_int size)
{
	u_int p = 2, i = 1;

	while (p <= n) {
		if (n % p == 0) {
			a->push_back(p);
			n /= p;
		} else if (i < size)
			p = prime_list[i++];
		else
			break;
	}

	if (a->empty() || n != 1)
		a->push_back(n);
}

int main(void)
{
	u_int n;
	cin >> n;

	u_int prime_list[100000];
	u_int size = make_prime_list(prime_list, (u_int)sqrt(n));

	vector<u_int> a;
	prime_factorize(prime_list, &a, n, size);

	cout << n << ":";
	for (auto x : a)
		cout << " " << x;
	cout << endl;

	return 0;
}