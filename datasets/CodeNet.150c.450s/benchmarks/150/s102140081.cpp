#include <cstdio>
#include <iostream>
#include <vector>

static const int kMaxNumber = 10000;
static int counter[kMaxNumber] = {};

void do_counting_sort(std::vector<int>& data, std::vector<int>& result)
{
    for(int i = 0; i < data.size(); i++) {
        counter[data[i]]++;
    }

    for(int i = 1; i < kMaxNumber; i++) {
        counter[i] = counter[i] + counter[i-1];
    }

    for(int i = 0; i < data.size(); i++) {
        result[counter[data[i]] - 1] = data[i];
        counter[data[i]]--;
    }
}

int main()
{
    int input_size;
    std::cin >> input_size;
    std::vector<int> data(input_size);
    std::vector<int> result(input_size);
    for(int i = 0; i < data.size(); i++) {
        std::cin >> data[i];
    }

    do_counting_sort(data, result);

    printf("%d", result[0]);
    for(int i = 1; i < result.size(); i++) {
        printf(" %d", result[i]);
    }
    putchar('\n');

    return 0;
}