#include <iostream>

using namespace std;

int main() {
    string s;
    char x;
    while (cin >> x) {
        s += x;
    }
    for (int i=0;i<s.length()/2;i++){
        char temp=s[i];
        s[i]=s[s.length()-i-1];
        s[s.length()-i-1]=temp;
    }
    cout << s << endl;
    return 0;
}