#include <iostream>
using namespace std;
int main(){
    int a,b;
    cin >> a >> b;
    while (a!=0 || b!=0){
        if (a < b)
            cout << a << " " << b << endl;
        else
            cout << b << " " << a << endl;
        cin >> a >> b;
    }
}