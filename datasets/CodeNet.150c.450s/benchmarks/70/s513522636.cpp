#include <iostream>
#include <string>
using namespace std;
 
int month[] = {31,29,31,30,31,30,31,31,30,31,30,31};
string date[] = {"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"};
 
int main(){
    int M, D;
    while( cin >> M >> D, M ){
        int d = 3;
        for(int i=0; i<M-1; i++ ){
            d += month[i];
        }
        d += D;
        d %= 7;
        cout << date[d] << endl;
    }
}