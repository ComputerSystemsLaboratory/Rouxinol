#include <iostream>
#include <string>
#include <sstream>
using namespace std;
int main(){
    int a , b;
    while( cin >> a >> b ){
        stringstream ss;
        ss << a+b ;
        string str = ss.str();
        cout << str.size() << endl;
    }
}