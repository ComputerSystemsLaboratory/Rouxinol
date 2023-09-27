#include<iostream>
#include<string>
using namespace std;

int main() {
    string str;
    cin >> str;
    int q;
    cin >> q;
    
    for(int i = 0; i < q; i++) {
        string order;
        cin >> order;
        
        int a, b;
        cin >> a >> b;
        if(order == "reverse") {
            string Temp;
            for(int i = a; i <= b; i++) {
                Temp[i] = str[i];
            }
            for(int i = a; i <= b; i++) {
                str[a + b - i] = Temp[i];
            }
        }
        if(order == "replace") {
            string p;
            cin >> p;
            str.replace(a, b - a + 1, p);
        }
        if(order == "print") {
            for(int i = a; i <= b; i++) {
                cout << str[i];
            }
            cout << endl;
        }
    }
}
