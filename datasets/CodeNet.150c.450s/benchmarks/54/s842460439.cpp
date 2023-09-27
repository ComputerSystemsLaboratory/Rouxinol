#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

static const string END_OF_TEXT = "END_OF_TEXT";

int main(void) {
    int cnt = 0;
    string input, target;
    cin >> target;
    transform(target.begin(), target.end(), target.begin(), ::toupper);
    do {
        cin >> input;
        if(input == "end_of_text") continue;
        transform(input.begin(), input.end(), input.begin(), ::toupper);
        if(input == target) cnt++;
    } while(input != END_OF_TEXT);
    cout << cnt << endl;

    return 0;
}