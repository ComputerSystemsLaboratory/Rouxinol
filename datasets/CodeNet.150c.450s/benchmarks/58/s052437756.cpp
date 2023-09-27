#include <cstdio>
#include <iostream>
#include <list>

const int kMaxDigits = 11;

void do_operation(std::list<int>& data, char operator_char)
{
    int operand1, operand2, result;

    operand1 = data.back();
    data.pop_back();
    operand2 = data.back();
    data.pop_back();

    if(operator_char == '+') {
        result = operand2 + operand1;
    } else if(operator_char == '-') {
        result = operand2 - operand1;
    } else if(operator_char == '*') {
        result = operand2 * operand1;
    } else if(operator_char == '/') {
        result = operand2 / operand1;
    } else {
        fputs("Error: Invalid operator\n", stderr);
        exit(EXIT_FAILURE);
    }
    data.push_back(result);
}

int main()
{
    char char_buffer;
    char array_buffer[kMaxDigits + 1]; // +1 for null byte
    int index = 0;
    bool value_flag = false;
    std::list<int> data;

    while((char_buffer = fgetc(stdin)) != EOF) {
        if('0' <= char_buffer && char_buffer <= '9') {
            value_flag = true;
            array_buffer[index] = char_buffer;
            index++;
        } else if(char_buffer == ' ' || char_buffer == '\n') { // clear buffer
            if(value_flag) {
                value_flag = false;
                array_buffer[index] = '\0';
                data.push_back(atoi(array_buffer));
            } else {
                do_operation(data, array_buffer[0]); // index should be 1 at this time
            }
            index = 0;
        } else if(char_buffer == '+' || char_buffer == '-' || char_buffer == '*' || char_buffer == '/') {
            array_buffer[index] = char_buffer;
            index++;
        } else {
            fputs("Error: Invalid character\n", stderr);
            exit(EXIT_FAILURE);
        }
    }

    printf("%d\n", data.front());
    return 0;
}