#include <stdio.h>
#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>

using namespace std;

int main(){
    int w,n;
    cin >> w >> n;
    int a[w],b[2][n];
    for(int i=1;i<=w;i++){
        a[i-1]=i;
    }
    char x[n];
    for(int i=0;i<n;i++){
        cin >> b[0][i] >>x[n] >> b[1][i];
        swap(a[b[0][i]-1],a[b[1][i]-1]);
    }
    for(int i=1;i<=w;i++){
        cout << a[i-1]<< endl;
    }
}
