#include <iostream>

using namespace std;

int main(){
    int a, b;
    string c;
    cin >> a >> b;
    if (a>b)
        c = ">";
    else if (a<b)
        c= "<";
    else
        c= "==";
    cout << "a" << " " <<  c  << " " << "b" <<endl;
}