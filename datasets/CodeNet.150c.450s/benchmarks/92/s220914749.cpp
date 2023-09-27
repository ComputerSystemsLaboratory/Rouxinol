#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    while ( cin >> a >> b){
        if(cin.eof()){break;}
        c = a+b;
        if (c/1000000>=1)
            cout << "7" << endl;
        else if (c/100000>=1)
            cout << "6" << endl;
        else if (c/10000>=1)
            cout << "5" << endl;
        else if (c/1000>=1)
            cout << "4" << endl;
        else if (c/100>=1)
            cout << "3" << endl;
        else if (c/10>=1)
            cout << "2" << endl;
        else
            cout << "1" << endl;
    }
}