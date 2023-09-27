#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>

int doit(int n, int p) {
    std::vector<int> tokens(n);
    int current = p;
    int index = 0;

    while(true) {
        if (current == 1) {
            bool end = true;
            for (int i = 0; i < n; i++) {
                end = end && (index == i || !tokens[i]);
            }
            if (end) {
                return index;
            }
        }
        if (current != 0) {
            tokens[index]++;
            current--;
            index = (index + 1) % n;
        } else {
            current = tokens[index];
            tokens[index] = 0;
            index = (index + 1) % n;
        }
    }
}

int main() {
    int n, p;
    while (std::cin >> n >> p) {
        if (n == 0 && p == 0) {
            break;
        } else {
            std::cout << doit(n, p) << std::endl;
        }
    }
}