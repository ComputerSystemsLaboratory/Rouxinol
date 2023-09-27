#include <iostream>
#include <string>
using namespace std;
int main(void){
    string s;
    int shf;
    int tmp;
    while (1) {
        int sum = 0;
        cin >> s;
        if (s == "-") break;
        cin >> shf;
        for (int i = 0; i < shf; i++) {
            cin >> tmp;
            sum += tmp;
        }
        tmp = sum % s.length();
        string ans = s.substr(tmp, s.length()) + s.substr(0, tmp);
        cout << ans << endl;
    }
}