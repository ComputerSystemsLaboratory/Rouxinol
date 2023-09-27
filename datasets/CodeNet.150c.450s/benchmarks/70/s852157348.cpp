#include <iostream>

int day_count(int month, int day) {
    int per_month[] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};    
    int total = 0;
    for (int i = 0; i < month - 1; i++) {
        total += per_month[i];
    }
    return total + day;
}

void day_check(int month, int day) {
    int count = day_count(month, day);
    count %= 7;
    std::string day_array[] = {"Wednesday", "Thursday", "Friday", "Saturday", "Sunday", "Monday", "Tuesday"};
    std::cout << day_array[count] << std::endl;
    return; 
}

int main(void) {
    int month;
    int day;
    while (1) {
        std::cin >> month >> day;
        if (month == 0) {
            return 0;;
        }
        day_check(month, day);
    }
    return 0;
}