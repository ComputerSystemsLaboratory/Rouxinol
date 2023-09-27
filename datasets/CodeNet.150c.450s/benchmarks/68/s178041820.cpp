#include <iostream>
#include <cmath>
using namespace std;

int main(){
    while(true){
        int n;
        cin >> n;
        if(n==0) break;
        int a[n];
        for(int i=0; i<n; i++){
            cin >> a[i];
        }
        int min1=abs(a[1]-a[0]);
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(j != i && min1 > abs(a[j]-a[i])) min1 = abs(a[j] - a[i]);
            }
        }
        cout << min1 << endl;
    }

    return 0;
}
