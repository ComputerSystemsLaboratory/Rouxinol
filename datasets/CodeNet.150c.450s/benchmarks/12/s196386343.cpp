#include <iostream>

int main() {
    int H;
    std::cin >> H;

    int heap[H];
    for (auto i = 0; i < H; i++) {
        std::cin >> heap[i];
    }
    for (auto i = 0; i < H ; i++) {
        int parent = (i + 1) / 2 - 1;
        int left = (i + 1) * 2 - 1;
        int right = left + 1;
        std::cout << "node " << i + 1 << ": key = " << heap[i] << ", ";
        if (parent >= 0) {
            std::cout << "parent key = " << heap[parent] << ", ";
        }
        if (left < H) {
            std::cout << "left key = " << heap[left] << ", ";
            if (right < H) {
                std::cout << "right key = " << heap[right] << ", ";
            }
        }
        std::cout << std::endl;
    }
}

