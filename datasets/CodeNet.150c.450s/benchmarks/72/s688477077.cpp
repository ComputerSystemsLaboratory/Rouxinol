#include <iostream>
#include <cctype>
using namespace std;

int main(void){
    char c;
    while(cin.get(c)){
        if(isupper(c)) c = tolower(c);
        else if(islower(c)) c = toupper(c);
        cout << c;
    }
    return 0;
}