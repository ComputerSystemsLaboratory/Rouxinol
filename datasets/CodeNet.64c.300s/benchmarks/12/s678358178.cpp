#include <iostream>
using namespace std;
int main(void){
    unsigned int x;
    x=0;
    cin >> x;
    if(x>100){
        return 1;
    }else{
        cout << x*x*x << endl;
    }    
    return 0;
}