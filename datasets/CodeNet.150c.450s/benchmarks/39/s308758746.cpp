#include <iostream>
using namespace std;

int main(){
    int a; int b; a=0; b=0;
    cin >> a >> b;
    if(a<1){
        return 0;
    }else{
        if(b>100){
            return 0;
        }else{
            cout << a*b << " " << a+b+a+b << endl; 
        }
    }
    return 0;
}