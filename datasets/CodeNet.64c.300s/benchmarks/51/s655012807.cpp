#include <iostream>
#include <string>
#include <math.h>
#include <stdio.h>
#include <algorithm>

using namespace std;

int main() {
    int a;
    cin>>a;
    long long int b=1;
    
    while(a!=0){
        b*=a;
        a--;
    }
    
    cout<<b<<endl;
    
    return 0;
}