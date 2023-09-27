#include <iostream>
using namespace std;
int main(void){

    int alphabet[26];
    for(int i = 0; i < 26; i++) {
        alphabet[i] = 0;
    }

    char str;
    while(cin >> str) {
        int num = tolower(str) - 'a';
        alphabet[num]++;
    }

    for(int i = 0; i < 26; i++){
        str = i + 'a';
        cout << str << " : " << alphabet[i] << endl;
    }

}