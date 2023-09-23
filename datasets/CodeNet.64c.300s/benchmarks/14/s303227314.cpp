#include <iostream>
using namespace std;
int main(void){
    int a, b;
    cin >> a >> b;
    if (a > b){
        cout << "a > b";
    }else if (a < b){
        cout << "a < b";
    }else{
        cout << "a == b";
    }
    cout << "\n";
    return 0;
}