#include <iostream>
#include <string.h>
#include <ctype.h>
using namespace std;

static const int MAX_LENGTH = 1200;

int main(void) {
    char* inputLine = new char[MAX_LENGTH];
    cin.getline(inputLine, MAX_LENGTH);

    for(int i=0; i <= strlen(inputLine); i++) {
        if(i == strlen(inputLine)) {
            cout << endl;
            break;
        }

        if(islower(inputLine[i])) {
            cout << (char)toupper(inputLine[i]);
            continue;
        }
        if(isupper(inputLine[i])) {
            cout << (char)tolower(inputLine[i]);
            continue;
        }
        cout << inputLine[i];
    }

    return 0;
}