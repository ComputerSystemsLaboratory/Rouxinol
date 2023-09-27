#include <iostream>
using namespace std;

int main(){
    bool a[30] = {};
    int n;
    for(int i = 0;i<30;i++) a[i] = false;
    while(cin >> n){
        a[n-1] = true;
    }
    for(int i = 0;i<30;i++){
        if(!a[i]) cout << i+1<<endl;
    }
    return 0;
}