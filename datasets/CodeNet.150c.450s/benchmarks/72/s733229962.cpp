#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    int a;
    char c;
    getline(cin,s);
    for (int i=0;i<s.size();i++){
        a=s[i];
        if ((a>='A')&&(a<='Z'))
            a=a+32;
        else if ((a>='a')&&(a<='z'))
            a=a-32;
        c=a;
        cout << c;
    }
    cout << '\n';
    return 0;
}
