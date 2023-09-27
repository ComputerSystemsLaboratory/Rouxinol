#include<iostream>
using namespace std;
 
int main(){
    int n, a, i;
    int min = 1000000;
    int max = -1000000;
    long long goukeiti = 0;
    cin >> n;
    for(i = 0; i < n; i++){
        cin >> a;
        if (a < min) min = a;
        if (a > max) max = a;
        goukeiti = goukeiti + a;
    }
    cout << min << " " << max << " " << goukeiti << endl;
 
    return 0;
}