//Sort
#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int i1, i2, i3, n, minnum, d, times;
    cin >> n;
    int v[n];
    i1 = 0;
    while(1){
        cin >> v[i1];
        i1++;
        if(i1>=n)break;
    }
    times=0;
    i1=0;
    i2=0;
    while(1){
        minnum=i2;
        i2++;
        i3=i2;
        if(i2==n)break;
        while(1){
            if(v[minnum]>v[i3]){
                minnum=i3;
            }
        i3++;
        if(i3>=n)break;
        }
        if(v[i2-1]!=v[minnum]){
        d=v[i2-1];
        v[i2-1]=v[minnum];
        v[minnum]=d;
            times++;
    }
    }
    i1=0;
    cout << v[i1];
    while(1){
        i1++;
        if(i1>=n)break;
        cout << " " << v[i1];
    }
    cout << endl << times << endl;

    
    return 0;
}