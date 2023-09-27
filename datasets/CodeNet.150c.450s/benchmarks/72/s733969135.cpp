#include<iostream>
using namespace std;

int main(){
    string s;
    //string ans;
    getline(cin,s);

    int i=0;
    while (s[i] != '\0' ){
        if (s[i] >='a' && s[i] <= 'z'){
            cout << char(toupper(s[i]));
        } else if (s[i] >='A' && s[i] <= 'Z'){
            cout << char(tolower(s[i]));
        } else {
            cout << s[i];
        }
        i++;
    }
    cout << endl;
    return 0;
}
