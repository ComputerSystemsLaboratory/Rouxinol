
#include<iostream>
using namespace std;



bool has3(int i){
    while(i){
        if(i % 10 == 3){
            return true;
        }
        i /= 10;
    }
    return false;
}

void call(int n){
    for(int i = 3; i <= n; i++){
       if(i % 3 == 0 || has3(i)){
           cout << " " << i;
       }
    }
    cout << endl;
}



int main(){
    int n;
    cin >> n;
    call(n);
    return 0;
}