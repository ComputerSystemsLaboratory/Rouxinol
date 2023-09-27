#include <iostream>
using namespace std;
 
int main(){
    int n;
 
    cin >> n;
    int* l = new int[n];
 
    for(int i = 0; i < n; i++){
        cin >> l[i];
    }
 
    for(int i = 0; i < n; i++){
        cout << l[n-i-1] << flush;
        if(i == n-1){
            cout << endl;
            break;
        }
        cout << ' ' << flush;
    }
 
    return(0);
}