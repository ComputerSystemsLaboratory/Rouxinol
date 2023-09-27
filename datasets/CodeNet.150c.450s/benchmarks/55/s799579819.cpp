#include <iostream>
#include <string>
using namespace std;

int main() {
    string x, digit;
    int sum, strSize, intDigit;
    while (true) {
        cin >> x;
        if (x == "0") {
            break;
        }
        sum = 0;
        strSize = x.size();
        for (int i = 0; i < strSize; i++) {
            digit = x.substr(i, 1);
            intDigit = stoi(digit);
            sum += intDigit;
        }
        cout << sum << endl;
    }
    return 0;
}