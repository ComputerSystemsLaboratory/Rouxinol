#include <iostream>
using namespace std;
 void call(int n);

int main(){

int n,x,f[10000] = {0};
cin >> n;

for(int i = 1; i <= n; i++){
    x = i;
    if (x%3 == 0){
        cout << " " << i;
    }else {   
    while ( x != 0 ){
        if(x%10 == 3 && f[i-1] == 0){
            cout << " " << i; 
            f[i-1] = 1;
        }
        x /= 10;
    }
    }
}
cout << endl;
}
