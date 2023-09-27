#include <stdio.h>
#include <algorithm>
#pragma warning(disable : 4996)
using namespace std;
int val, size_, heap[2097168]; char c[9];
inline void insert(int x) {
	int ptr = size_++; heap[ptr] = x;
	while (ptr > 1) {
		if (heap[ptr >> 1] < heap[ptr]) swap(heap[ptr], heap[ptr >> 1]);
		ptr >>= 1;
	}
}
inline int extract() {
	int ret = heap[1], ptr = 1;
	while ((ptr << 1) + 1 < size_) {
		ptr <<= 1;
		if (heap[ptr] > heap[ptr + 1]) swap(heap[ptr >> 1], heap[ptr]);
		else swap(heap[ptr + 1], heap[ptr >> 1]), ptr++;
	}
	heap[ptr] = heap[--size_], heap[size_] = 0;
	while (ptr > 1) {
		if (heap[ptr >> 1] < heap[ptr]) swap(heap[ptr], heap[ptr >> 1]);
		ptr >>= 1;
	}
	return ret;
}
int main() {
	size_ = 1;
	while (scanf("%s", c), c[2] != 'd') {
		if (c[0] == 'i') scanf("%d", &val), insert(val);
		else printf("%d\n", extract());
	}
	return 0;
}