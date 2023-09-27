
#include <iostream>

using namespace std;

int main() {
    string num;
    long sum;


    while (true) {
        cin >> num;
        if (num == "0") {
            break;
        }
        sum = 0;
        for (int i = 0; i < num.length(); i++) {
            sum += num[i] - '0';
        }
        cout << sum << endl;
    }
}