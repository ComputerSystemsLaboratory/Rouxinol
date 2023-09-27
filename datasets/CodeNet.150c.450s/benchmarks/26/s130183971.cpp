#include<iostream>
using namespace std;
 
int main(){
    int a,b;
    cin >> a >> b;
    string comp;
    if (a < b) {
        comp = "a < b";
    }
    else if (a==b) {
        comp = "a == b";
    }
    else {
        comp = "a > b";
    }
    cout << comp.c_str() << std::endl;
    return 0;
}