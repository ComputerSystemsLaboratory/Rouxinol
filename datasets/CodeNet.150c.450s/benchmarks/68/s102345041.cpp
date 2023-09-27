#include <iostream>
#include <cmath>
using namespace std;
int main(void){
    int n, a[1010]={0};
    while(cin >> n){
        int min=1000001;
        if(n == 0)  break;
        for(int i=0; i< n; i++){
            cin >> a[i];
        }
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                if(min > abs(a[j]-a[i]))    min=abs(a[j]-a[i]);
            }
        }
        cout << min <<endl;
    }
    return 0;
}

