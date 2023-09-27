#include <iostream>
#include <string>
#include <map>
#include <vector>
using namespace std;

int main ()
{
    int n;
    while (cin >> n, n) {
        map<string,string> str;
        for (int i = 0; i < n; i++) {
            string str1, str2;
            cin >> str1 >> str2;
            str[str1] = str2;
        }
        cin >> n;
        for (int i = 0; i < n; i++) {
            string str1;
            cin >> str1;
            if (str.find(str1) != str.end()) cout << str[str1];
            else cout << str1;
        }
        cout << endl;
    }

    return 0;
}