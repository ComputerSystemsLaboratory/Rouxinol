#include <bits/stdc++.h>

int n;
std::string dep, arr;

int main() {
    while (true) {
        std::cin >> n;
        if (n == 0) {
            return 0;
        }
        std::vector<int> vec(86401, 0);
        for (int i = 0; i < n; i++) {
            std::cin >> dep >> arr;
            int dep_time = std::stoi(dep.substr(0, 2))*3600+std::stoi(dep.substr(3, 2))*60+std::stoi(dep.substr(6,2));
            int arr_time = std::stoi(arr.substr(0, 2))*3600+std::stoi(arr.substr(3, 2))*60+std::stoi(arr.substr(6,2));
            vec[dep_time]++;
            vec[arr_time]--;
        }
        for (int i = 1; i < 86400; i++) {
            vec[i] += vec[i-1];
        }
        std::cout << *std::max_element(vec.begin(), vec.end()) << std::endl;
    }
}

