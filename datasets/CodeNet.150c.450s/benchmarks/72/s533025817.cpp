#include <iostream>
#include <string>

using namespace std;

int main() {
    string str;
    getline(cin, str);

    for (int i = 0; i < str.size(); i++) {
        if (str[i] >= 0x41 &&
            str[i] <= 0x5a) 
        {
            str[i] += 0x20;
        }
        else 
        if( str[i] >= 0x61 &&
            str[i] <= 0x7a)
        {
            str[i] -= 0x20;
        }
    }

    cout << str << endl;

    return 0;
}