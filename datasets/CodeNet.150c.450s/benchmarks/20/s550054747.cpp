#include <iostream>
using namespace std;

int main(){
    int i,amari,tmp;
    cin >> i;

    tmp = i / (60*60);
    amari = i % (60*60);
    cout << tmp << ":";
    tmp = amari / 60;
    amari = amari % 60;
    cout << tmp << ":" << amari << endl;
}