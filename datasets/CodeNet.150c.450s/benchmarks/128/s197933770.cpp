#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

// A
int main() {
    ios_base::sync_with_stdio(false);

    string input;

    cin >> input;

    reverse(input.begin(), input.end());

    cout << input << endl;
}
 