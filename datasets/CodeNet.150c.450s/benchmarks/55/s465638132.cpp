# include<iostream>
using namespace std;
int main() {
    string str;
    int b = 0;
    while (1) {
        cin >> str;
        if (str=="0") break;
        for (int i=0;i<str.size();i++) {
            int x = str[i] - '0';
            b += x;
        }
        cout << b << endl;
        b = 0;
    }
    return 0;
}
