#include <iostream>
using namespace std;

int main(void){
    
    unsigned int a = 0;
    unsigned int b = 0;
    unsigned int c = 0;
    
    cin >> a >> b >> c;
    
    unsigned int num = 0;
    for(int i = a ; i <= b ; i++){
        if((c % i) == 0){
            num++;
        }
    }
    cout << num<< endl;
    
    return 0;
}