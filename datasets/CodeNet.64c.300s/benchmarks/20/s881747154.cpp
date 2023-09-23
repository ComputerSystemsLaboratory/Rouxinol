#include <algorithm>
#include <iostream>
#include <stdio.h>

using namespace std;

int main(void){
    int i,j,d;
    double ans=0;
    while(cin >> d){
        i=0;
        ans=0;
        while(i<600){
            ans+=i*i*d;
            i+=d;
        }
        printf("%.0lf\n",ans);
    }
    return 0;
}