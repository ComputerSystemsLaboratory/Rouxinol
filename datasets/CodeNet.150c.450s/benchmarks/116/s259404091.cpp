#include <iostream>
template <typename T>
class RingBuffer {
	int size;
	int idx;
	T* arr;
	T& at(int i) {
		return arr[i % size];
	}
public:
	RingBuffer(int s) {
		size = s;
		idx = 0;
		arr = new T[s];
	}
	void push(T t) {
		at(idx++) = t;
	}
	const T& peek() {
		return at(idx);
	}
};
int solve(int n, int k) {
	RingBuffer<int> buffer(k);
	int sum = 0;
	int a;
	for (auto i = 0; i < k; ++i) {
		std::cin >> a;
		buffer.push(a);
		sum += a;
	}
	int max = sum;
	for (auto i = k; i < n; ++i) {
		std::cin >> a;
		sum += a - buffer.peek();
		buffer.push(a);
		if (sum > max) max = sum;
	}
	return max;
}
int main() {
	int n, k;
	while (std::cin >> n >> k && n != 0) {
		std::cout << solve(n, k) << '\n';
	}
	return 0;
}