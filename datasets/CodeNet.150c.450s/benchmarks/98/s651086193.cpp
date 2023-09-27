#include <iostream>
#include <cstdlib>
#include <vector>
#include <algorithm>

void change(std::vector<int> taro, std::vector<int> hanako) {
    int t_size = taro.size();    
    int h_size = hanako.size();    
    int t_total = 0;
    int h_total = 0;

    for (int i = 0; i < t_size; i++) {
        t_total += taro[i]; 
    }
    for (int i = 0; i < h_size; i++) {
        h_total += hanako[i]; 
    }
    int diff = h_total - t_total;
    if (diff % 2 != 0) {
        std::cout << "-1" << std::endl;
        return;
    }
    diff /= 2;

    int check = 0;

    while (check != t_size) {
        int search_num =  taro[check] + diff;;
        for (int i = 0; i < h_size; i++) {
            if (hanako[i] == search_num) {
                std::cout << taro[check] << " " << hanako[i] << std::endl; 
                return;
            }
        }
        check++;
    }
    std::cout << "-1" << std::endl;
    return;
}

int main(void) {
    int n;
    int m;
    std::cin >> n >> m;
    while (n != 0) {
        std::vector<int> taro(n);
        std::vector<int> hanako(m);
        for (int i = 0; i < n; i++) {
            std::cin >> taro[i];
        }
        for (int j = 0; j < m; j++) {
            std::cin >> hanako[j];
        }
        std::sort(taro.begin(), taro.end() );
        std::sort(hanako.begin(), hanako.end() );
        change(taro, hanako);

        std::cin >> n >> m;
    }
    return EXIT_SUCCESS;
}