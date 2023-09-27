#include <iostream>
#include <vector>

void trace(const std::vector<int> &a){
	for(int i = 0; i < a.size(); ++i){
		std::cout << a[i] << (i == a.size() - 1 ? '\n' : ' ');
	}
}

void insertionSort(std::vector<int> &a){
	trace(a);
	for (int j = 1; j < a.size(); ++j){
		int tmp = a[j];
		int i = j - 1;
		while (i >= 0 && a[i] > tmp){
			a[i + 1] = a[i];
			i = i - 1;
		}
		a[i + 1] = tmp;
		trace(a);
	}
}

int main() {
	int n;
	
	std::cin >> n;
	std::vector<int> a(n);
	for(int i = 0; i < n; ++i){
		std::cin >> a[i];
	}
	insertionSort(a);
	
	return 0;
}