#include<iostream>

#define MAX_NUM 21

int numbers[100];
long long values[100][MAX_NUM];

int main(int argc, char const* argv[])
{
    int len;

    std::cin >> len;
    for (int i = 0; i < len; i++) std::cin >> numbers[i];

    values[0][numbers[0]] = 1;
    for (int i = 1; i < len-1; i++) {
        for (int j = 0; j < MAX_NUM; j++) {
            int add_value = j + numbers[i];
            if (add_value <= 20) values[i][add_value] += values[i-1][j];

            int minus_value = j - numbers[i];
            if (minus_value >= 0) values[i][minus_value] += values[i-1][j];
        }
    }

    std::cout << values[len-2][numbers[len-1]] << std::endl;

    return 0;
}