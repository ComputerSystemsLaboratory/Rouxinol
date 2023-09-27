#include <iostream>
using namespace std;
int main(void){
    char ch;
    int num;
    int alphabet[26] = {};
    while(cin >> ch) {
        num = ch - 'a';
        if (0 <= num && num < 26) alphabet[num]++;
        num = ch - 'A';
        if (0 <= num && num < 26) alphabet[num]++;
    }
    for (int i = 0; i < 26; i++) {
        ch = 'a' + i;
        cout << ch << " : " << alphabet[i] << endl;
    }
    return 0;
}