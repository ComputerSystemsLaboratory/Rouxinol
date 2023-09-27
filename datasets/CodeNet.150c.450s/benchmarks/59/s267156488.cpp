#include <iostream>
#include <vector>

template<typename T>
void print_ary(std::vector<T> ary, char delim = '\n') {
    for(int i = 0; i < ary.size()-1; i++) {
        std::cout << ary[i] << delim;
    }
    std::cout << ary[ary.size()-1];
}


template<typename T>
void insertion_sort(std::vector<T>&& ary) {
    for (int i = 1; i < ary.size(); i++) {
        int target = ary[i];
        int j = i - 1;
        while(j >= 0 &&  ary[j] > target) {
            ary[j+1] = ary[j];
            j--;
        }
        ary[j+1] = target;
        print_ary(ary, ' ');
        std::cout << std::endl;
    }
}

int main(int argc, char const* argv[])
{
    int n;
    std::cin >> n;
    std::vector<int> ary(n);
    for (auto &i: ary) {
        std::cin >> i;
    }
    print_ary(ary, ' ');
    std::cout << std::endl;
    insertion_sort(std::move(ary));
    return 0;
}