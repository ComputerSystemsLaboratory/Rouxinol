#include <iostream>
using namespace std;

int main(){
    int min, max, a;
    int ii = 0;
    cin >> min >> max >> a;
    for(int i = min;i <= max;i++){
        
        if(a % i == 0){
            ii++;
        }
        
    }
    cout << ii << endl;
    return 0;
}