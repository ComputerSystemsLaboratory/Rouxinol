#include <iostream>
using namespace std;
int main(void){
    int n;
    long a, max=-1000000, min=1000000, sum=0;
    cin >> n;
    while(n--!=0){
        cin >> a;
        if(a>max) max = a;
        if(a<min) min = a;
        sum += a;
    }
    cout << min << " " << max << " " << sum << endl; 
}

