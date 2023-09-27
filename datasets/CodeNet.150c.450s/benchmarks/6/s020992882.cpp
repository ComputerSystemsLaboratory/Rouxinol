#include <iostream>
using namespace std;

int main() {
    int a;
    int b;
    int c;
    string calc;
    cin >> a >> b >> c;
    
    if(a < b && b < c){
        calc = "Yes";
    }else{
        calc = "No";
    }

    cout << calc << endl;
}
