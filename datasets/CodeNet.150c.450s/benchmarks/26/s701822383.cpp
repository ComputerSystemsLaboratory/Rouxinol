#include <iostream>

using namespace std;

int main(){
    int num1, num2;
    cin >> num1 >> num2;
    string symbol;
    if(num1 < num2){
        symbol = " < ";
    }
    else if(num1 > num2){
        symbol = " > ";
    }
    else{
        symbol = " == ";
    }
    cout << "a" << symbol << "b" << endl;
}