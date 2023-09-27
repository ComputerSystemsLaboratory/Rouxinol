#include <iostream>
#include <string>
using namespace std;

int main() {
    string str, tempA, tempB, temp;
    int number, times, strSize;
    while (true) {
        cin >> str;
        if (str == "-") {
            break;
        }
        cin >> times;
        strSize = str.size();
        temp = str;
        for (int i = 0; i < times; i++) {
            cin >> number;
            tempA = temp.substr(number);
            tempB = temp.substr(0, number);
            temp = tempA + tempB;
        }
        cout << temp << endl;
    }
    return 0;
}