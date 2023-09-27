#include <iostream>
#include <vector>

void ins_sort(std::vector<int> vec) {
    int n = vec.size();
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++) {
            if(vec[j] > vec[i]) {
                int tmp = vec[j];
                vec[j] = vec[i];
                vec[i] = tmp;
            }
        }
        for(int it = 0; it < n - 1; it++) {
            std::cout << vec[it] << " ";
        }
        std::cout << vec[n-1] << std::endl;
    }
}


int main(int argc, char const* argv[])
{
    int n = 0;
    std::cin >> n;
    std::vector<int> ary(n);
    for (auto& i: ary) {
        std::cin >> i;
    }
    ins_sort(ary);
    return 0;
}