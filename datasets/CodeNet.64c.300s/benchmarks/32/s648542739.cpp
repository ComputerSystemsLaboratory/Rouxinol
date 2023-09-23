#include<iostream>
using namespace std;
int main(){
    int n;
    int an;
    cin >> n;
    
    long long max,min,sum;
    max = -1000000;
    min = 1000000;
    sum = 0;
    
    for (int x = 0; x < n; x++) {
        cin >> an;
        if (an > max) {
            max = an;
        }  
        if (an < min) {
            min = an;
        }
       
        sum += an;    
    }
    
    cout << min << " " << max << " " << sum << endl;
    
    
    return 0;
}