#include <iostream>
#include <vector>

int selection_sort(std::vector<int>& ary) {
    int n = ary.size();
    int replace_counter = 0;
    for(int i = 0; i < n; i++) {
        int minj = i;
        for(int j = i; j < n; j++) {
            if (ary[minj] > ary[j]) {
                minj = j;
            }
        }
        if (i != minj) {
            std::swap(ary[i], ary[minj]);
            replace_counter++;
        }
    }
    return replace_counter;
}

int main(int argc, char const* argv[])
{
    int n = 0;
    std::cin >> n;
    std::vector<int> ary(n);
    for(auto& i: ary) {
        std::cin >> i;
    }

    int rep_c = selection_sort(ary);
    for(int i = 0; i < n-1; i++) {
        std::cout << ary[i] << " ";
    }
    std::cout << ary[n - 1] << std::endl;
    std::cout << rep_c << std::endl;

    return 0;
}