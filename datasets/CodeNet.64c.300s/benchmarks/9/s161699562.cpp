#include <iostream>
#include <cmath>
#include <algorithm>
#include <string>
#include <stdio.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    int a=100000;
    for(int i=0;i<n;i++){
        a=a*1.05;
        int b;
        b=a/1000;
        if(a%1000!=0){
            a=(b+1)*1000;
        }
    }
    cout << a<<endl;
}
