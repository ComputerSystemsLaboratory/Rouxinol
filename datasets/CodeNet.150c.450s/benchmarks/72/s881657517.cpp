#include <iostream>
#include <ctype.h>
using namespace std;
int main(void){
    // Here your code !
    string str;
    int len;
    getline(cin,str);
    len = str.size();
    for(int i=0;i<len;i++) {
        if(isalpha(str[i])) {
            if(isupper(str[i])) {
                str[i] = tolower(str[i]);
            } else {
                str[i] = toupper(str[i]);
            }
        }
    }
    cout << str << endl;
}