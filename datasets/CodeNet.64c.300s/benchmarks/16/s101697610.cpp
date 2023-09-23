#include <climits>
#include <iostream>
using namespace std;

int main() {
    int n, min = 0, profit = 0, prev = 0, save = -INT_MAX;
    cin >> n;
    while(n--){
        int d;
        cin >> d;
        if(!min) min = d;
        min = d < min ? d : min;
        profit = profit > d - min ? profit : d - min;
        
        if(prev){
            save = save > d - prev  ? save : d - prev;
        }
        prev = d;
        
    }
    cout << (!profit ? save : profit) << endl;
    return 0;
}