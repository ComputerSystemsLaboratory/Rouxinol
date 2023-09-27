#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n,a[5];
    for(int i=0 ; i<5 ; i++){
        cin >> a[i];
    }
    sort( a , a+5 );
    for(int i=4 ; i >= 0 ; i--){
        cout << a[i] ;
        if(i==0)
            cout << endl;
        else
            cout << " ";
    }
}