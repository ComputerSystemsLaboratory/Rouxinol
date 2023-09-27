#include <iostream>
#include <vector>

void partition(std::vector<int> sequence, int n) {
    int creterion = sequence.at(n-1);
    int i=0;
    for (int j=0; j<sequence.size()-1; j++) {
        if (creterion >= sequence.at(j)) {
            std::swap(sequence.at(i), sequence.at(j));
            i++;
        }
    }
    std::swap(sequence.at(i), sequence.at(n-1));
    
    for (int j=0; j<sequence.size(); j++) {
        std::cout << (j==i ? "[" : "") << sequence.at(j) << (j==i ? "]" : "") << (j+1 == sequence.size() ? "\n" : " ");
    }
}

int main() {
    int n;
    std::cin >> n;
    std::vector<int> sequence(n);
    for (int i=0; i<n; i++) std::cin >> sequence.at(i);

    partition(sequence, n);
    
}
