#include <iostream>

using namespace std;

int main() {
    string str;


    getline(cin, str);
    string newStr = str;
    for (int i = 0; i < str.length(); i++) {
        if ((int) str[i] >= (int) 'a' && (int) str[i] <= (int) 'z') {
            newStr[i] = ((int) str[i] - 32);
        } else if ((int) str[i] >= (int) 'A' && (int) str[i] <= (int) 'Z') {
            newStr[i] = ((int) str[i] + 32);

        }


    }


    for (int i = 0; i < str.length(); i++) {
        cout << newStr[i];
    }
    cout << endl;

}