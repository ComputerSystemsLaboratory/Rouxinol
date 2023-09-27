#include <iostream>
struct Card {
    char m;
    int n;
    int index;
};
int partition(Card* a, int p, int r)
{
    int x = a[r].n;
    int i = p - 1;
    for (int j = p; j <= r; j++) {
	if (a[j].n <= x) {
	    i++;
	    Card tmp = a[i];
	    a[i] = a[j];
	    a[j] = tmp;
	}
    }
    return i;
}
void quickSort(Card* a, int p, int r)
{
    if (p < r) {
	int q = partition(a, p, r);
	quickSort(a, p, q - 1);
	quickSort(a, q + 1, r);
    }
}

bool checkStable(Card* a, int size)
{
    Card* prevCard = (Card*)malloc(sizeof(Card));
    for (int i = 0; i < size; i++) {
	if (prevCard->n == a[i].n && prevCard->index > a[i].index) {
	    return false;
	}
	*prevCard = a[i];
    }
    return true;
}
int main()
{
    int n = 0;
    std::cin >> n;
    Card* a = (Card*)malloc(n * sizeof(Card));
    for (int i = 0; i < n; i++) {
	std::cin >> a[i].m;
	std::cin >> a[i].n;
	a[i].index = i;
    }
    quickSort(a, 0, n - 1);
    bool isStable = checkStable(a, n);
    if (isStable) {
	std::cout << "Stable" << std::endl;
    } else {
	std::cout << "Not stable" << std::endl;
    }
    for (int i = 0; i < n; i++) {
	std::cout << a[i].m << " " << a[i].n << std::endl;
    }
}