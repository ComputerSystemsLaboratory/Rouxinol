#include <iostream>
#include <stdio.h>
using namespace std;
int main(){
    int n;
    double x=1;
    cin >> n;
    for (int i=1;i<=n;i++){
        x*=i ;
    }
    // cout << x << endl;
    printf("%.0f\n",x);
}