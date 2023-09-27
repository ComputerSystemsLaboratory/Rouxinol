#include <iostream>
#include <string>
#include <stdio.h>
int main()
{
    std::string input;
    std::string output;
    std::cin >> input;
    int temp;
    while (1) {
        temp = getchar();
        if (temp == '\n') {
            break;
        }
        input += temp;
    }

    output = input;

    for (int i = 0; i < input.length(); i++) {
        if (97 <= input[i] && input[i] <= 122) {
            output[i] = input[i] - 32;
        } else if (65 <= input[i] && input[i] <= 90) {
            output[i] = input[i] + 32;
        } else {
            output[i] = input[i];
        }
    }
    std::cout << output;
    std::cout << std::endl;
}

