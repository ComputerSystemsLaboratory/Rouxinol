#include <cstdint>
#include <cstdio>
#include <iostream>
#include <vector>

static const uint32_t kVeryLargeNumber = 0xffffffff;

uint32_t cmp_counter = 0;

void merge(std::vector<uint32_t>& data, int begin1, int begin2, int end2)
{
    int j = 0;
    int k = 0;
    std::vector<uint32_t> subdata1(begin2 - begin1 + 1);
    std::vector<uint32_t> subdata2(end2 - begin2 + 1);

    for(int i = 0; i < subdata1.size() - 1; i++) {
        subdata1[i] = data[begin1 + i];
    }
    subdata1[subdata1.size() - 1] = kVeryLargeNumber;

    for(int i = 0; i < subdata2.size() - 1; i++) {
        subdata2[i] = data[begin2 + i];
    }
    subdata2[subdata2.size() - 1] = kVeryLargeNumber;

    for(int i = begin1; i < end2; i++) {
        cmp_counter++;
        if(subdata1[j] < subdata2[k]) {
            data[i] = subdata1[j];
            j++;
        } else {
            data[i] = subdata2[k];
            k++;
        }
    }
}

void merge_sort(std::vector<uint32_t>& data, int vector_1_begin, int vector_2_end)
{
    if(vector_2_end - vector_1_begin <= 1) {
        return;
    }

    int vector_2_begin = (vector_1_begin + vector_2_end) / 2;
    merge_sort(data, vector_1_begin, vector_2_begin);
    merge_sort(data, vector_2_begin, vector_2_end);
    merge(data, vector_1_begin, vector_2_begin, vector_2_end);
}

int main()
{
    int input_size;
    std::cin >> input_size;
    std::vector<uint32_t> data(input_size);
    for(int i = 0; i < data.size(); i++) {
        std::cin >> data[i];
    }

    merge_sort(data, 0, data.size());

    printf("%u", data[0]);
    for(int i = 1; i < data.size(); i++) {
        printf(" %u", data[i]);
    }
    putchar('\n');
    printf("%u\n", cmp_counter);

    return 0;
}