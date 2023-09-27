#include <iostream>
#include <vector>
#include <utility>

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

void BubbleSort(std::vector<int>& values) {
    int flag = 1;
    int change_count = 0;
    while (flag) {
        flag = 0;
        for (int i = 0; i < values.size(); i++) {
            if (values[i] < values[i-1]) {
                std::swap(values[i], values[i-1]);
                flag = 1;
                change_count++;
            }
        }
    }
    Display(values);
    std::cout << change_count << std::endl;
}

void SelectionSort(std::vector<int>& values) {
    int change_count = 0;
    for (int i = 0; i < values.size(); i++) {
        int min_ix = i;
        for (int j = i; j <values.size(); j++) {
            if (values[j] < values[min_ix]) {
                min_ix = j;
            }
        }
        if (i != min_ix) {
            std::swap(values[i], values[min_ix]);
            change_count++;
        }
    }
    Display(values);
    std::cout << change_count << std::endl;
}

int main(int argc, char const* argv[])
{
    std::vector<int> values = GetInput();
    SelectionSort(values);

    return 0;
}