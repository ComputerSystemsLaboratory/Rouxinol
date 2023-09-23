#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int array[n];
    for(int i=0; i<n; i++){
        cin >> array[i];
    }
    for(int i=sizeof(array)/sizeof(int)-1; 0<=i; i--){
        cout << array[i];
        if(i!=0) cout << ' ';
    }
    cout << endl;
    return 0;
}