#include <cstdio>
#include <iostream>
#include <vector>

void swap(int* a, int* b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

int do_partition(std::vector<int>& data, int begin_index, int end_index)
{
    int pivot = data[end_index-1];
    int left_last_index = begin_index;
    for(int i = begin_index; i < end_index - 1; i++) {
        if(data[i] <= pivot) {
            swap(&data[i], &data[left_last_index]);
            left_last_index++;
        }
    }
    swap(&data[end_index-1], &data[left_last_index]);
    return left_last_index;
}

int main()
{
    int input_size;
    std::cin >> input_size;
    std::vector<int> data(input_size);
    for(int i = 0; i < data.size(); i++) {
        std::cin >> data[i];
    }

    int pivot_index = do_partition(data, 0, data.size());

    if(pivot_index == 0) {
        printf("[%d]", data[0]);
    } else {
        printf("%d", data[0]);
    }
    for(int i = 1; i < data.size(); i++) {
        if(pivot_index == i) {
            printf(" [%d]", data[i]);
        } else {
            printf(" %d", data[i]);
        }
    }
    putchar('\n');
}