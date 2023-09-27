#include <iostream>
#include <algorithm>
using namespace std;
static const int MAX = 200000;

int main(void){
    
    int n;
    
    // First input, determines how many values there are
    cin >> n;

    // Initialise max value
    int maxv = -2000000000;
    
    // Initialise min value to first element
    int minv;
    cin >> minv;
    
    // Max value always after min value because of R[i] - minv
    for(int i = 1; i < n; i++){
        int number;
        cin >> number;
        maxv = max(maxv, number - minv);
        minv = min(minv, number);
    }
    
    cout << maxv << endl;
    
    return 0;
    
}