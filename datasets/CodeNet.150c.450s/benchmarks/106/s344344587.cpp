#include<iostream>
using namespace std;

int main(){
    int a, b, c, f;
    cin >> a >> b >> c;
    
    while(a <= b){
        if ( c % a == 0 ) f++;
        a++;
    }
    
    cout << f << endl;
    
    return 0;
}
