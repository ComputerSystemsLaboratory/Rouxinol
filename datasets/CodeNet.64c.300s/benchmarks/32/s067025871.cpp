#include <iostream>
#include <algorithm>
using namespace std;
int main(void){
    int n;
    cin >> n;
    
    long a, max_a = -1000000, min_a = 1000000, total = 0;
    for(int i = 0; i < n; i++){
        cin >> a;
        max_a = max(a, max_a);
        min_a = min(a, min_a);
        total += a;
    }
    
    cout << min_a << " " << max_a << " " << total << endl;
}