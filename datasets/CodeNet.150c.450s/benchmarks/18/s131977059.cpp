#include <iostream>
using namespace std;

int main(){
    int debt = 100000;
    int week;
    
    cin >> week;
    
    for(int i = 0; i < week; ++i){
        debt *= 1.05;
        if(debt % 1000 != 0){
            debt = (debt + 999) / 1000;
            debt = debt * 1000;       
        }
    }

    cout << debt << endl;

    return 0;
}
