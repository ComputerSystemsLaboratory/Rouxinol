#include <iostream>
#include <string>
using namespace std;
int main(void){
    string a,b,c;
    int m,h;
    while(true){
        cin >> a;
        if(a == "-"){
            break;
        } else {
            cin >> m;
            for(int i = 1; i <= m; i++){
                cin >> h;
                b = "";
                c = "";
                for(int j = 0; j < h; j++){
                    b += a[j];
                }
                for(int j = h; j < a.length(); j++){
                    c += a[j];
                }
                a = c + b;
            }
            cout << a << endl;
        }
    }
    return 0;
}

