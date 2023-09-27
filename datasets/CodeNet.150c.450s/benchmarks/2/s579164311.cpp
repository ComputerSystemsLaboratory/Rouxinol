#include <iostream>
int partition(int* a, int size)
{
    int r = a[size - 1];
    int i = -1;
    for (int j = 0; j < size; j++) {
	if (a[j] <= r) {
	    i++;
	    int tmp = a[i];
	    a[i] = a[j];
	    a[j] = tmp;
	}
    }
    return i;
}

int main()
{
    int n = 0;
    std::cin >> n;
    int* a = (int*)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) {
	std::cin >> a[i];
    }
    int r = a[n - 1];
    int partNum = partition(a, n);
    for (int i = 0; i < n; i++) {
	if (partNum == i) {
	    std::cout << "[" << a[i] << "]";
	} else {
	    std::cout << a[i];
	}
	if (i + 1 < n) {
	    std::cout << " ";
	}
    }
    std::cout << std::endl;

    return 0;
}