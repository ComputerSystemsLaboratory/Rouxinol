#include <iostream>
using namespace std;

void operation(int*a, int*b){
    int c = *a;
    *a = *b;
    *b = c % *b;    
}

int main(){
    //input
    int a, b;
    cin >> a;
    cin >> b;
    
    //eucleadian algorithm
    //make a greater than b
    if(a < b){
        //change values
        int c = a;
        a = b;
        b = c;
    }
    
    //cout << "input : a = " << a << " b = " << b <<  endl;
    //computation
    while(b>0){
        //cout << " a = " << a << " b = " << b <<  endl;
        operation(&a, &b);
    }
    
    //output
    cout << a << endl;
}