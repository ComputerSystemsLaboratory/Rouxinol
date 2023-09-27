#include <iostream>
#include <string>
using namespace std;

int main(void) {
    string input, target;

    cin >> input;
    cin >> target;
    input += input;
    cout << (string::npos != input.find(target) ? "Yes" : "No") << endl;

    return 0;
}