#include <iostream>
#include <string>
using namespace std;
 
int main(){
    string s;
    getline(cin, s);
    char c;
    for(int i=0;i<s.size();i++){
        c = s[i];
        if('a' <= c && c <= 'z'){
            cout << char(c-32);
        }else if('A' <= c && c <= 'Z'){
            cout << char(c+32);
        }else{
            cout << c;
        }
    }
    cout << endl;
}
