#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(void){
    string str, x, y;
    cin >> str;
    int q;
    cin >> q;
    int a, b, p;
    for(int i = 0; i < q; i++){
        cin >> x >> a >> b;
        p = b - a + 1;
        if(x == "print"){
            cout << str.substr(a, p) << endl;     
        }
        if(x == "reverse"){
            b += 1;
            reverse(str.begin() + a,str.begin() + b);
        }
        if(x == "replace"){
            cin >> y;
            str.replace(a, p, y);
        }
    }
    
    return 0;
}

