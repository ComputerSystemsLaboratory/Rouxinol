#include <iostream>
using namespace std;
int main(void){
    // Your code here!
    int n, a[100]={0};//100個
    cin >> n;
    if(n<=100){
    for(int i=0; i < n; i++){
        cin >> a[i];
    }
     for(int i = n-1; i >= 0; i--){
         if(i == n-1){
        cout << a[i];
     }
     else{
         cout << " " << a[i];
     }
     }
    cout << endl;
}
}
