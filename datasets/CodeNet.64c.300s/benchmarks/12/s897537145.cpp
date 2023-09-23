#include <iostream>
using namespace std;


int main(void){
    
    int x = 5;
    int sum = 1;
    cin >> x;
        
    for(int i=0; i<=2; i++) {
        sum *= x;
    }
    cout << sum << endl;
    
    return 0;
}