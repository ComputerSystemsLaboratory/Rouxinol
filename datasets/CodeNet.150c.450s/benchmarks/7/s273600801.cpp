#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int input[10];
    for(int i=0; i<10; ++i) {
        cin >> input[i];
    }
    sort(begin(input), end(input));
    cout << input[9] << "\n" << input[8] << "\n" << input[7] << endl;
}