#include <iostream>
using namespace std;

bool Include3(int n){
    if(n%10==3){
        return true;
    }
    n/=10;
    if(n){
      return Include3(n);  
    } 
    return false;
}
void CheckNum(int n){
    if(n%3==0){
        cout << " " << n;
        return;
    }
    if(n>9){
        if(Include3(n)){
            cout << " " << n;
        }
    }
}


int main(void){
    int n;
    cin >> n;
    for(int i=1;i<=n;i++){
       CheckNum(i);
    }
    cout << endl;
}