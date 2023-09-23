#include <iostream>
using namespace std;

int main(void){
    
    int n = 0;
    cin >> n;
    
    
    int a[n];
    for(int i = 0 ; i < n ; i++){
        cin >> a[i];
    }
    
    for(int i = (n-1) ; i >= 0 ;){
        cout << a[i];
        i--;
        if(i < 0){
            cout << endl;
            break;
        }else{
            cout << ' ';
        }
    }
    
    return 0;
}