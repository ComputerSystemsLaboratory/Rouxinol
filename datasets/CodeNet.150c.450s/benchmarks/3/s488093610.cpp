#include <iostream>
#include <string>
using namespace std;

int main(void){
    string str;
    cin >> str;
    int q;
    cin >> q;
    for(int i = 0; i < q; i++){
        string op, p = "";
        int a, b;
        cin >> op;
        if(op == "print"){
            cin >> a >> b;
            cout << str.substr(a, b - a + 1) << endl;
        } else if (op == "reverse"){
            cin >> a >> b;
            for(int i = b; i >= a; i--) p += str[i];
            str.replace(a, b - a + 1, p);
        } else {
            cin >> a >> b >> p;
            str.replace(a, b - a + 1, p);
        }
    }

    return 0;
}

