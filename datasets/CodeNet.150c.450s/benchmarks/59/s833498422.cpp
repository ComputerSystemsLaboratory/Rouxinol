#include <iostream>
#include <vector>

std::vector<int> GetInput() {
    int n = 0;
    std::vector<int> values;
    std::cin >> n;
    values.resize(n, 0.0);

    for (auto it = values.begin(); it < values.end(); it++) {
        std::cin >> *it;
    }
    return values;
}

void Display(std::vector<int> value) {
    int n = value.size();
    for (int i = 0; i < n; i++) {
        std::cout << value[i];
        if(i == n-1) {
            std::cout << std::endl;
        }
        else {
            std::cout << " ";
        }
    }
}

void InsertionSort(std::vector<int>& values) {
    for (int i = 1; i < values.size(); i++) {
        Display(values);
        int j = i - 1;
        int target_value = values[i];
        while(j >= 0 && target_value < values[j]) {
            values[j+1] = values[j];
            j--;
        }
        values[j+1] = target_value;
    }
    Display(values);
}

int main(int argc, char const* argv[])
{
    std::vector<int> values = GetInput();
    InsertionSort(values);

    return 0;
}