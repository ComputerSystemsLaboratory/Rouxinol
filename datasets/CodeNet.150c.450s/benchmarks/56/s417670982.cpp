#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(void){
    int n,i,a[10001]={0};
    long min,max,sum=0;
    cin >> n;
    
    for(i=1;i<=n;i++){
        cin >> a[i];
    }
    
    min = 1000000;
    for(i=1;i<=n;i++){
        if(min >= a[i]){
            min = a[i];
        }
    }
    
    max = -1000000;
    for(i=1;i<=n;i++){
        if(max <= a[i]){
            max = a[i];
        }
    }
    
    for(i=1;i<=n;i++){
        sum = sum + a[i];
    }
    cout << min << " " << max << " " << sum << endl;
}
