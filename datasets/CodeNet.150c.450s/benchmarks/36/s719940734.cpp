#include <iostream>

using namespace std;

int main(){
    int sum, x, d;
    while(cin >> d){
        sum = 0;
        for(int i=1;(x=(i*d))<600;i++){
            sum += x*x;
        }
        sum *= d;
        cout << sum << endl;
    }
    return 0;
}