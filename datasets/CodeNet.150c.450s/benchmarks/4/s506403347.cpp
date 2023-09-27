#include <iostream>

using namespace std;

int main() {
    int a,b,c;
    while (1) {
       
        cin >> a >> b >> c;
        int d;
        d = a+b;
        if (a == (-1) && b == (-1) && c ==(-1)) break;
        if (a == -1 || b == -1){
            cout << "F" ;
        }
        else if (d >= 80){
            cout << "A" ;
        }
        else if (d<80 && d>=65){
            cout << "B" ;
        }
        else if (d<65 && d>=50){
            cout << "C" ;
        }
        else if(d<50 && d>=30){
            if (c >= 50){
                cout << "C";
            }
            else  {
                cout << "D" ;
            }
        }
        else {
            cout << "F" ;
        }
        cout << endl;
    }
}

