#include <iostream>
#include <cstring>
using namespace std;

int main(void) {
    char word[32];
    char str[100];
    int count;
    
    cin >> word;
    count = 0;
    while(cin >> str) {
        for(int i = 0; i < strlen(str); ++i) {
            if(isupper(str[i])) {
                str[i] = tolower(str[i]);
            }
        }
        if(strstr(str, "END_OF_TEXT"))   break;
        if(strstr(str, word) && strlen(str) == strlen(word))   ++count;
    }
    cout << count << endl;
    return 0;
}

