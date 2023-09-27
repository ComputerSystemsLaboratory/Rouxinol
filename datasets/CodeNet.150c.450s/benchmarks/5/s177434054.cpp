#include <iostream>
using namespace std;
int main(void){
    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    
    for(int i=1;i<=n;i++){
        if(i==n){
            cout << a[n-i];
        }
        else{
            cout << a[n-i] << " ";
        }
    }
    cout << endl;
}

