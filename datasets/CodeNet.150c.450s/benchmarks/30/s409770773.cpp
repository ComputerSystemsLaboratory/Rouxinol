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

template<typename T>
void bubble_sort(std::vector<T> && ary) {
    int n = ary.size();
    bool flag = true;
    int counter = 0;
    while (flag) {
        flag = false;
        for (int j = n - 1; j > 0; j--) {
            if (ary[j] < ary[j - 1]) {
                std::swap(ary[j], ary[j - 1]);
                flag = true;
                counter++;
            }
        }
    }
    print_ary(ary, ' ');
    std::cout << std::endl << counter << std::endl;;
}

template<typename T>
void selection_sort(std::vector<T>&& ary){
    int counter = 0;
    for (int i = 0; i < ary.size(); i++) {
        int min_index = i;
        for(int j = i + 1; j < ary.size(); j++) {
            if (ary[min_index] > ary[j]) {
                min_index = j;
            }
        }
        if(i != min_index) {
            std::swap(ary[i], ary[min_index]);
            counter++;
        }
    }
    print_ary(ary, ' ');
    std::cout << std::endl << counter << std::endl;;
}

int main(int argc, char const* argv[])
{
    int n;
    std::cin >> n;
    std::vector<int> ary(n);
    for (auto &i: ary) {
        std::cin >> i;
    }
    selection_sort(std::move(ary));
    return 0;
}