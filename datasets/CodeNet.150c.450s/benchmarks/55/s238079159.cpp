#include <iostream>
#include <stdio.h>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string number;
    int num;
    int result;
    while(1) {
        cin >> number;
        if (number == "0") break;

        result = 0;
        for (int i = 0; i < number.size(); i++) {
            num = number[i] - '0';
            result += num;
        }
        cout << result << endl;
    }
    return 0;
}