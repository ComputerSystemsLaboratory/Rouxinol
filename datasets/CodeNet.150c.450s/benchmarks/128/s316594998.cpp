#include <iostream>
#include <string>

using namespace std;

int main() {
    int i,len;
    string ch;

    cin >> ch;

    len = ch.length();
 
    for(i = 0;i < len / 2;i++){
        char box = ch[i];
        ch[i] = ch[len - i - 1];
        ch[len - i - 1] = box;
    }

    cout << ch << endl;

    return 0;
}