#include <iostream>
using namespace std;

int main() {
    int n, sum, round_up;
    sum = 100000;
    
    cin >> n;
    for(int i=0; i<n; i++){
        sum *= 1.05;
        round_up = sum % 1000;
        if(round_up>0){
            sum = sum - round_up + 1000;
        }
    }
    cout << sum << endl;
    return 0;
}