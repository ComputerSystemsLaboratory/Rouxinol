#include <iostream>
using namespace std;

int main(void)
{
    int number1, number2, number3;

    cin >> number1 >> number2 >> number3;

    if (number1 < number2 && number2 < number3) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}