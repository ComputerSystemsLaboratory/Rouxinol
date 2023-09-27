#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main(void) {
    string str;
    char order[16];
    int n;
    int a, b;
    char word[1000];
    
    cin >> str;
    cin >> n;
    
    for(int i = 0; i < n; ++i) {
        cin >> order;
        
        if(strstr(order, "print")) {
            cin >> a >> b;
            for(int j = a; j < b + 1; ++j) {
                cout << str[j];
            }
            cout << endl;
        } else if(strstr(order, "reverse")) {
            cin >> a >> b;
            for(int j = 0; j < (double)(b - a + 1) / 2; ++j) {
                char cpy = str[a + j];
               str[a + j] = str[b - j];
                str[b - j] = cpy;
            }
        } else if(strstr(order, "replace")) {
            cin >> a >> b >> word;
            str.replace(a, b - a + 1, word);
        }
    }
    return 0;
}

