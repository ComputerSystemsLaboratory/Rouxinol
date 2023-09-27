#include <iostream>
#include <string>
#include <sstream>

void split(int* arr, const std::string& str) {
    std::stringstream stream;
    stream << str;
    std::string buf;
    for (int i = 0; std::getline(stream, buf, ' '); ++i) {
        arr[i] = std::stoi(buf);
    }
}

void get_array(int* arr, std::istream& stream) {
    std::string buf;
    std::getline(stream, buf);
    split(arr, buf);
    return;
}

int count(int const* s, const int n, int const* t, const int q) {
    int counter = 0;
    for (int i = 0; i < q; ++i) {
        for (int j = 0; j < n; ++j) {
            if (s[j] == t[i]) {
                ++counter;
                break;
            }
        }
    }
    return counter;
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);

    int n;
    std::cin >> n;
    std::cin.ignore();

    int s[10000];
    get_array(s, std::cin);

    int q;
    std::cin >> q;
    std::cin.ignore();

    int t[500];
    get_array(t, std::cin);

    std::cout << count(s, n, t, q) << std::endl;

    return 0;
}