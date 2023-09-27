#include <iostream>

using namespace std;
int main(void){
    
    int n,a;
    cin >> n;
    
    int data[n];
    
    for(int i=0;i<n;i++){
        cin >> a;
        data[i] = a;
    }
    for(int i=n-1;i>=0;i--){
        if(i==n-1){
            cout << data[i];
        }else{
            cout <<" "<< data[i];
        }
    }
    cout << endl;

    return 0;
}
