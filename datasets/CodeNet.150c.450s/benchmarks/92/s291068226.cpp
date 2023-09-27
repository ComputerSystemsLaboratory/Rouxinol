#include <iostream>
using namespace std;
int main(void){
    int a,b;
    while(cin >> a >> b){
        a = a + b;
        int i = 0;
        while(a > 0){
            a = a/10;
            i++;
        }
        cout << i << endl;
    }
    
}