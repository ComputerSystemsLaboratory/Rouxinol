#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    int a,b;
    string Operator;
    
    while(cin >> a >> Operator >> b){
        
        if(Operator == "?"){
            return 0;
        }
        if(Operator == "+"){
            cout << a + b << endl;
        }else if(Operator == "-"){
            cout << a - b << endl;
        }else if(Operator == "*"){
            cout << a * b << endl;
        }else if(Operator == "/"){
            cout << a / b << endl;
        }  
    }
}