#include <cstdio>
#include <vector>

int main()
{
    int input_size;
    scanf("%d", &input_size);
    std::vector<int> data(input_size);
    for(int i = 0; i < data.size(); i++) {
        scanf("%d", &data[i]);
    }
    for(int i = 0; i < data.size(); i++) {
        printf("node %d: ", i + 1);
        printf("key = %d, ", data[i]);
        if(i != 0) {
            printf("parent key = %d, ", data[(i + 1) / 2 - 1]);
        }
        if(2 * i + 1 < data.size()) {
            printf("left key = %d, ", data[2 * i + 1]);
        }
        if(2 * i + 2 < data.size()) {
            printf("right key = %d, ", data[2 * i + 2]);
        }
        putchar('\n');
    }
}