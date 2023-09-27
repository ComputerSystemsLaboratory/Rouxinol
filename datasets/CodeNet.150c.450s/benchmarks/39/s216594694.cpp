#include <iostream>
using namespace std;
 
int main(){
    int a, b;
    int s, r;
 
    cin >> a;
    cin >> b;

    s = a * b;
    r = 2 * (a + b);

    if((a>=1)&&(b<=100)){
       cout << s << " " << r << endl;
    }else{
       cout << "error" << endl;
    };
}