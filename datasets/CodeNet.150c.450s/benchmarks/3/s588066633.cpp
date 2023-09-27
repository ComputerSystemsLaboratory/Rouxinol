#include <iostream>
using namespace std;
int main(void){
    string str, ins;
    int n;
    cin >> str >> n;
    for (int i = 0; i < n; i++) {
        cin >> ins;
        if (ins == "print") {
            int a, b;
            cin >> a >> b;
            for (int j = a; j <= b; j++) {
                cout << str[j];
            }
            cout << endl;
        } else if (ins == "reverse") {
            int a, b;
            cin >> a >> b;
            for (int j = 0; j < (b-a+1)/2; j++) {
                char tmp = str[a+j];
                str[a+j] = str[b-j];
                str[b-j] = tmp;
            }
        } else {
            int a, b;
            string p;
            cin >> a >> b >> p;
            for (int j = a; j <= b; j++) {
                str[j] = p[j-a];
            }
        }
    }
    return 0;
}