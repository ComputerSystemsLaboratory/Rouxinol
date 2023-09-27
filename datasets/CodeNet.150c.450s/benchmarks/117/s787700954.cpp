#include <iostream>
#include <stdlib.h>

void merge(int n, int* s, int left, int mid, int right, int* count)
{
    int start = left;
    int size = right - left;
    int startM = mid;
    int* mergeArray = (int*)malloc(size * sizeof(int));
    int i = 0;
    while (size > i) {
	if (mid == right || (left != startM && s[left] < s[mid])) {
	    mergeArray[i] = s[left];
	    left++;
	} else {
	    mergeArray[i] = s[mid];
	    mid++;
	}
	*count = *count + 1;
	i++;
    }
    for (int i = 0; i < size; i++) {
	s[start + i] = mergeArray[i];
    }
}
void mergeSort(int n, int* s, int left, int right, int* count)
{
    if (left + 1 < right) {
	int mid = (right + left) / 2;
	mergeSort(n, s, left, mid, count);
	mergeSort(n, s, mid, right, count);
	merge(n, s, left, mid, right, count);
    }
}
int main()
{
    int n = 0;
    int count = 0;
    std::cin >> n;
    int* s = (int*)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) {
	std::cin >> s[i];
    }
    mergeSort(n, s, 0, n, &count);
    for (int i = 0; i < n; i++) {
	std::cout << s[i];
	if (i + 1 < n) {
	    std::cout << " ";
	}
    }
    std::cout << std::endl;
    std::cout << count << std::endl;
    return 0;
}