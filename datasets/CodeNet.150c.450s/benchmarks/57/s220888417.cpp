#include <iostream>
#include <string>

using namespace std;

int main(){

int x,y;
string str;

while(true){
cin >> x >> str >>y;

if(str == "?")break;
if(str == "+")cout << x + y << endl;
if(str == "-")cout << x - y << endl;
if(str == "*")cout << x * y << endl;
if(str == "/")cout << x / y << endl;
}


}