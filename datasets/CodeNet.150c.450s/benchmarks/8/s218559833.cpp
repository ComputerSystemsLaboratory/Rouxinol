#include <iostream>
#include <string>
using namespace std;
int main(void){
    int n;
    cin >> n;
    cin.ignore();
    int a = 0, b = 0;
    for (int i = 0; i < n; i++) {
        string str1, str2;
        cin >> str1 >> str2;
        bool flag = false;
        for (int i = 0; i < min(str1.length(), str2.length()); i++) {
            if (!flag && str1[i] != str2[i]) {
                str1[i] > str2[i] ? a += 3 : b += 3;
                flag = true;
            }
        }
        if (!flag) {
            if (str1.length() == str2.length()) {
                a++; b++;
            } else {
                str1.length() > str2.length() ? a += 3 : b += 3;
            }
        }
    }
    cout << a << " " << b << endl;
    return 0;
}