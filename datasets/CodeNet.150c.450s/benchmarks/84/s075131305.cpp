#include <iostream>
void merge(int n, int* s, int left, int mid, int right, long* count)
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
	    i++;
	} else {
	    mergeArray[i] = s[mid];
	    mid++;
	    i++;
	    *count += mid - (start + i);
	}
    }
    for (int i = 0; i < size; i++) {
	s[start + i] = mergeArray[i];
    }
}
void mergeSort(int n, int* s, int left, int right, long* count)
{
    if (left + 1 < right) {
	int mid = (right + left) / 2;
	mergeSort(n, s, left, mid, count);
	mergeSort(n, s, mid, right, count);
	merge(n, s, left, mid, right, count);
    }
}
long countInversions(int* a, int n)
{
    long* count = (long*)malloc(sizeof(long));
    *count = 0;
    mergeSort(n, a, 0, n, count);
    return *count;
}
int main()
{
    int n;
    std::cin >> n;
    int* a = (int*)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) {
	std::cin >> a[i];
    }
    long inversion = countInversions(a, n);
    std::cout << inversion << std::endl;
    return 0;
}