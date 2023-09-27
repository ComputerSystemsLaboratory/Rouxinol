#include <iostream>
using namespace std;



int main (int argc, char const* argv[]){
    int n, tmp, a[5];
    
    cin >> a[0] >> a[1] >> a[2] >> a[3] >> a[4];
    
    for(int i=4; i>=0; i--){
        for(int j=0; j<i; j++){
            if(a[j]<a[j+1]){
                tmp = a[j];
                a[j] = a[j+1];
                a[j+1] = tmp;
            }
            
            
        }
    }
    for(int i=0; i<5;i++){
        cout << a[i];
        if(i<4) cout<<" ";
    }
    cout << endl;
    
    return 0;
}