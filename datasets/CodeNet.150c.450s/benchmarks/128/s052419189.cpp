#include <stdio.h>
#include <string>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    string input;
    cin >> input;
    reverse(input.begin(), input.end());
    cout << input << endl;
    return 0;
}