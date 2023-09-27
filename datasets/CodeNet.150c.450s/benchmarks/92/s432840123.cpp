#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    kuri :
    while ( cin >> a >> b){
        if(cin.eof()){break;}
        c = a+b;
        if (c/1000000>=1){
            cout << "7" << endl; goto kuri;
        }
        if (c/100000>=1){
            cout << "6" << endl; goto kuri;
        }
        if (c/10000>=1){
            cout << "5" << endl; goto kuri;
        }
        if (c/1000>=1){
            cout << "4" << endl; goto kuri;
        }
        if (c/100>=1){
            cout << "3" << endl; goto kuri;
        }
        if (c/10>=1){
            cout << "2" << endl; goto kuri;
        }
        else{
            cout << "1" << endl; goto kuri;
        }


    }
}