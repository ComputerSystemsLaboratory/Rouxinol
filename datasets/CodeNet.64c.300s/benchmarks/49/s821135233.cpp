#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    while(cin >> a >> b){
        c = 10;
        for(int i = 1; i < 10; i++){
            if(a + b < c){
                cout << i <<endl;
                break;
            }
            else c *= 10;
        }
    }
    return 0;
}