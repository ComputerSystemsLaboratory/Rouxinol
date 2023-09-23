#include<iostream>

using namespace std;

int main(void){

    int a , b , c;

    cin >> a >> b >> c;

    int d;

    if(a > b){
        
        d = a;

        a = b;

        b = d;

    }

    else{
        
        if(b > c){

            d = b;

            b = c;

            c = d;

        }

    }

    if(b > c){

        d = b;

        b = c;

        c = d;

    }

    if(a > b){

        d = a;

        a = b;

        b = d;

    }    

    cout << a << " " << b << " " << c << endl;

return 0;

}