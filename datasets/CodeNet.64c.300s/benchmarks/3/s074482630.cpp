#include<iostream>
using namespace std;

int main(){
    int n;
    
    cin >> n;
    int a[n];
    for(int i = 1;i<=n;i++){
        cin >> a[i-1];
    }
    for(int i = n;i>1;i--){
        cout << a[i-1] << " ";
    }
    cout << a[0] <<endl;
}