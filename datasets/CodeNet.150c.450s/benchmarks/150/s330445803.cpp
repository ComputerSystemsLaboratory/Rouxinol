#include <iostream>
int* countingSort(int* a, int n, int max)
{
    int* c = (int*)malloc(max * sizeof(int));
    //init
    for (int i = 0; i < max; i++) {
	c[i] = 0;
    }
    //count up
    for (int i = 0; i < n; i++) {
	c[a[i]]++;
    }
    //sum
    for (int i = 1; i < max; i++) {
	c[i] += c[i - 1];
    }
    int* sorted = (int*)malloc((n + 1) * sizeof(int));
    for (int i = n - 1; i >= 0; i--) {
	int index = c[a[i]];
	sorted[index] = a[i];
	c[a[i]]--;
    }
    return sorted;
}
int main()
{
    int n = 0;
    std::cin >> n;
    int* a = (int*)malloc(n * sizeof(int));
    int max = 0;
    int min = 10000;
    for (int i = 0; i < n; i++) {
	std::cin >> a[i];
	if (a[i] > max) {
	    max = a[i];
	}
	if (a[i] < min) {
	    min = a[i];
	}
    }
    int* sorted = countingSort(a, n, max + 1);
    for (int i = 1; i < n + 1; i++) {
	std::cout << sorted[i];
	if (i < n) {
	    std::cout << " ";
	}
    }
    std::cout << std::endl;

    return 0;
}