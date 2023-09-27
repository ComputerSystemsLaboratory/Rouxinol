#include <iostream>
#include <stdio.h>
#include <iomanip>
#include <string>
 
using namespace std;
 
int main(void){
    int n;
    scanf("%d",&n);
    int* a = new int[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    cout << a[n - 1];
    for (int i = 1; i < n; i++) {
        cout << " " << a[n - i - 1];
    }
    cout << endl;
    delete[] a;
    return 0;
}