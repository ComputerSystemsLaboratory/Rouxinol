#include<iostream>
#include<cstdio>
#include<string>
using namespace std;

int main(){
    int n;
    string str, s1;
    string order;
    int a, b;
    cin >> str;
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        cin >> order >> a >> b;
        if (order == "print") {
            for (int i = a; i <= b; i++) {
                cout << str[i];
            }
        cout << "\n";
        } else if (order == "reverse") {
            for (int i = a, j = b; i < j; i++, j--) swap(str[i], str[j]);
        } else if (order == "replace") {
            cin >> s1;
            str.replace(a, b-a+1, s1);
        }
    }
    return 0;
}
