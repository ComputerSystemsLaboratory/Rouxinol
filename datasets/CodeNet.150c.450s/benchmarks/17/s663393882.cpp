#include <cmath>
#include <iostream>
#include <string>
#include <cstdlib>
#include <cstdio>
#include <algorithm>
#include <sstream>

using namespace std;
int main(){
    int a[5];
    for(int i=0;i<5;i++)
        cin >> a[i];
    sort(a,a+5);
    for(int i=4;i>=0;i--)
        cout << a[i] <<(i==0 ? '\n':' ');
    return 0;
}