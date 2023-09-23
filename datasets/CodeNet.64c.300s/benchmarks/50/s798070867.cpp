//bubble sort
#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int n, d, i1, i2, times;
    cin >> n;
    int a[n];
    
    for(i1=0;i1<n;i1++){
        cin >> a[i1];
    }
    times=0;
    i2 = n;
    for(i2=n;i2>0;i2--){
        i1 = n;
        while(1){
            i1--;
            if(a[i1]<a[i1-1]){
                d=a[i1];
                a[i1]=a[i1-1];
                a[i1-1]=d;
                times++;
            }
            if(i1<=n-i2){break;}
        }
    }
    
    i1=0;
    //cout
    while(1){
        if(i1==0){cout << a[i1]; if(n==1){break;} else{i1++; continue;}}
        cout << " " << a[i1];
        i1++;
        if(i1==n){break;}
    }
    cout << endl << times << endl;
    
    
    return 0;
}