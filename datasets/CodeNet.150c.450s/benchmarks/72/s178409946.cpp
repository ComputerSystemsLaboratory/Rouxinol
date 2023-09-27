#include <iostream>
#include <string.h>
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

        if(0 <= inputLine[i] - 'a' && inputLine[i] - 'a' <= 25) {
            cout << (char)(inputLine[i] - ('a'-'A'));
            continue;
        }
        if(0 <= inputLine[i] - 'A' && inputLine[i] - 'A' <= 25) {
            cout << (char)(inputLine[i] + ('a'-'A'));
            continue;
        }
        cout << inputLine[i];
    }
 
    return 0;
}