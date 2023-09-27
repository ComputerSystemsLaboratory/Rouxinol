#include <iostream>
#include <string.h>
#include <algorithm>
using namespace std;

int main(void){

    string target, str;
    int answer = 0;
    cin >> target;
    transform(target.begin(), target.end(), target.begin(), ::toupper);

    while (true) {
        cin >> str;
        if (str == "END_OF_TEXT") {
            break;
        }
        transform(str.begin(), str.end(), str.begin(), ::toupper);
        if (target == str) {
            answer++;
        }
    }
    cout << answer << endl;
}