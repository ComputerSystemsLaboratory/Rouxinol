#include <cstdio>
#include <iostream>
#include <list>
#include <string>

void delete_value(std::list<int>& data, int number)
{
    for(std::list<int>::iterator iter = data.begin(); iter != data.end(); iter++) {
        if(*iter == number) {
            data.erase(iter);
            return;
        }
    }
}

void show_data(std::list<int>& data)
{
    printf("%d", data.front());
    for(std::list<int>::iterator iter = std::next(data.begin()); iter != data.end(); iter++) {
        printf(" %d", *iter);
    }
    putchar('\n');
}

int main()
{
    int input_size, number;
    std::string operation;
    std::list<int> data;

    std::cin >> input_size;
    for(int i = 0; i < input_size; i++) {
        std::cin >> operation;
        if(operation == "insert") {
            std::cin >> number;
            data.push_front(number);
        } else if(operation == "delete") {
            std::cin >> number;
            delete_value(data, number);
        } else if(operation == "deleteFirst") {
            data.pop_front();
        } else if(operation == "deleteLast") {
            data.pop_back();
        } else {
            fputs("Error: Invalid operation\n", stderr);
            exit(EXIT_FAILURE);
        }
    }

    show_data(data);

    return 0;
}