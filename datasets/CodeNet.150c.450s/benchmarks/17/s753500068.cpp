#include<iostream>
#include<set>
#include<string>

int main() {
	int a, b, c, d, e;
	while (std::cin >> a >> b >> c >> d >> e) {
		std::multiset<int> sort;
		sort.insert(a); sort.insert(b); sort.insert(c); sort.insert(d); sort.insert(e);
		int i = 0;
		for (std::multiset<int>::reverse_iterator itr = sort.rbegin(); itr != sort.rend(); itr++) {
			std::cout << *itr;
			if (i < 4) std::cout << " ";
			i++;
		}
		std::cout << std::endl;
	}
	return 0;
}