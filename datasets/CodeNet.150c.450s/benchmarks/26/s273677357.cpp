#include <iostream>
#include <string>
using namespace std;

int main(void){
    int a,b;
    string m;
    cin >> a >> b;
    if(a < b) m = "<";
    if(a == b) m = "==";
    if(a > b) m = ">";
    cout << "a " << m << " b" << endl;
    return 0;
}