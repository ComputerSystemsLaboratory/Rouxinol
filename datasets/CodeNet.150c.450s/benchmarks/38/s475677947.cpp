#include <iostream>

void printN (int N);
int main()
{
    int N;
    std::cin >> N;
    printN (N);
	return 0;
    }

void printN (int N)
{
    for (int i = 0; i < N; ++i) {
        int x, y, z;
        std::cin >> x >> y >> z;
        if (x * x + y * y == z * z) {
        std::cout << "YES" << std::endl;
        } else if (y * y + z * z == x * x) {
        std::cout << "YES" << std::endl;
        } else if (z * z + x * x == y * y) {
        std::cout << "YES" << std::endl;
        } else {
        std::cout << "NO" << std::endl;
        }
    }
}