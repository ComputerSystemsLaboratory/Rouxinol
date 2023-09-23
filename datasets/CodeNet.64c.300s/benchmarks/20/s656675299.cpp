#include<iostream>

using namespace std;
int main(){
	
    int a,b,i;
    while( cin >> a ) {
        b = 0;
        i = 0;
        
        while( i < 600 / a) 
		b += a * i * a * i++ * a;
		
        cout << b << "\n";
    }
}
