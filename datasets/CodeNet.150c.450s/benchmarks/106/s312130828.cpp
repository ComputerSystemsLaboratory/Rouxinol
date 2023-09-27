#include <iostream>

using namespace std;

int main(void){
    int min, max, num;
    cin >> min >> max >> num;
    
    int count = 0;
    for (int i = min; i <= max; i++) {
        if (num % i == 0) {
            count++;
        }
    }
    
    cout << count << endl;

    return 0;
}