#include <iostream>
using namespace std;

int main(void)
{
    int number1, number2;
    cin >> number1 >> number2;

    if (number1 == number2) {
        cout << "a == b" << endl;
    } else if (number1 < number2) {
        cout << "a < b"<< endl;
    } else {
        cout << "a > b" << endl;
    }
}