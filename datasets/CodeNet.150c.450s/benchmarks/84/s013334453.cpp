#include<iostream>
#include<vector>

long long int mergecount(std::vector<int> &a) {
	long long int count = 0;
	int n = a.size();
	if (n > 1) {
		std::vector<int> b(a.begin(), a.begin() + n / 2);
		std::vector<int> c(a.begin() + n / 2, a.end());
		count += mergecount(b);
		count += mergecount(c);
		for (int i = 0, j = 0, k = 0; i < n; ++i)
			if (k == c.size())       a[i] = b[j++];
			else if (j == b.size())  a[i] = c[k++];
			else if (b[j] <= c[k])   a[i] = b[j++];
			else { a[i] = c[k++]; count += n / 2 - j; }
	}
	return count;
}

int main() {
	int n;
	std::cin >> n;
	std::vector<int> a(n,0);

	
	for (int i = 0; i<n; i++) {
		std::cin >> a[i];
	}
	std::cout << mergecount(a) << std::endl;
		return 0;
}