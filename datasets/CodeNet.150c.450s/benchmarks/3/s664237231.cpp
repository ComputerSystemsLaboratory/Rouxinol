#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cin >> str;
    int q;
    cin >> q;
    string order, x;
    int a, b;

    for(int i=0; i<q; i++) {
        cin >> order;
        cin >> a >> b;
        if(order == "replace") {
            cin >> x;
            for(int j=0; j<x.length(); j++) {
                str[a + j] = x[j];
            }
        } else if(order == "reverse") {
            for(int j=0; j<(b-a+1)/2; j++) {
                char temp;
                temp = str[a + j];
                str[a + j] = str[b - j];
                str[b - j] = temp;
            }
        } else {
            for(int j=0; j<(b-a+1); j++) {
                cout << str[a + j];
            }
            cout << endl;
        }
    }
}