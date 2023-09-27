#include <iostream>
#include <string>
using namespace std;
int main(void){
    string str, ord, kari, p;
    int n, a, b;
    cin >> str >> n;
    for(int i = 0; i < n; i++){
        cin >> ord >> a >> b;
        if(ord == "print"){
            for(int j = a; j <= b; j++){
                cout << str[j];
            }
            cout << endl;
        } else if (ord == "reverse"){
            kari = "";
            for(int j = 0; j <= b - a; j++){
                kari += str[b-j];
            }
            str = str.substr(0, a) + kari + str.substr(b + 1);
        } else if (ord == "replace"){
            cin >> p;
            str = str.substr(0, a) + p + str.substr(b + 1 );
        }
    }
    return 0;
}

